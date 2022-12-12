import xlrd
import os
from xlutils.copy import copy
from utils import getColumnNo

COL_O = getColumnNo('O')

directory = './excels/'
srcFile = 'test.xls'

path = os.path.join(directory, srcFile)

rb = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = rb.sheet_by_index(0)

wb = copy(rb)
ws = wb.get_sheet(0)

# 人数
total = 0
# 双被告
couples = 0
for i in range(1, sheet0.nrows):
    row = sheet0.row_values(i)
    # print(row)

    names = row[COL_O].split('、')

    # 统计总人数
    for name in names:
        if len(name) <= 4:
            total += 1
            # print(name)

    # 统计双被告数
    if len(names) == 2 \
            and len(names[0]) <= 4 \
            and len(names[1]) <= 4:
        couples += 1
        print(names[0] + ' ' + names[1])

print(total)
print(couples)
