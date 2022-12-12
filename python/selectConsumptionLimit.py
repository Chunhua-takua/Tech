# 筛选出限制消费令的判决
# 利用正则表达式匹配 V 列（审理经过）和 Y 列（裁判理由）中的关键字

import re
import xlrd
import os
from xlutils.copy import copy
from utils import getColumnNo, isNone

# 审理经过
COL_V = getColumnNo('V')
# 裁判理由
COL_Y = getColumnNo('Y')

COL_AA = 26

CONSUMPTION_LIMIT = "限制高消费"
CONSUMPTION_LIMIT_1 = "限制消费令"

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

    row[COL_AA] = ''

    if not isNone(re.search(CONSUMPTION_LIMIT, row[COL_V]))\
            or not isNone(re.search(CONSUMPTION_LIMIT, row[COL_Y])) \
            or not isNone(re.search(CONSUMPTION_LIMIT_1, row[COL_V])) \
            or not isNone(re.search(CONSUMPTION_LIMIT_1, row[COL_Y])):
        row[COL_AA] = 'Y'
        count += 1

    ws.write(i, COL_AA, row[COL_AA])
    print('finished')

wb.save(path)

print('count = ' + str(count))
