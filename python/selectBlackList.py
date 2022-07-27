# 筛选出失信被执行人员名单的判决
# 利用正则表达式匹配 V 列（审理经过）和 Y 列（裁判理由）中的关键字
#
# 关键字：
# 失信决定书
# 失信被执行人名单 12
# 失信人员名单 1
# 失信被执行人员名单 5
# 失信黑名单

import re
import xlrd
import os
from xlutils.copy import copy
from utils import getColumnNo, isNone

# 审理经过
COL_V = getColumnNo('V')
# 裁判理由
COL_Y = getColumnNo('Y')
# 失信被执行人
COL_AB = 27

BLACK_LIST = '失信(决定书|被执行人名单|人员名单|被执行人员名单|黑名单)'

directory = './excels/'
srcFile = 'output.xls'

path = os.path.join(directory, srcFile)

rb = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = rb.sheet_by_index(0)

wb = copy(rb)
ws = wb.get_sheet(0)

count = 0
for i in range(1, sheet0.nrows):
    row = sheet0.row_values(i)
    print(row)

    row[COL_AB] = ''

    if not isNone(re.search(BLACK_LIST, row[COL_V]))\
            or not isNone(re.search(BLACK_LIST, row[COL_Y])):
        row[COL_AB] = 'Y'
        count += 1

    ws.write(i, COL_AB, row[COL_AB])
    print('finished')

wb.save(path)

print('count = ' + str(count))
