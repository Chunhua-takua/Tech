# 将日期转化为纯数字格式
# eg., 2021-12-27 -> 20211227

import xlrd
import os
from xlutils.copy import copy

directory = './'

srcFile = 'src.xls'
book1 = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = book1.sheet_by_index(0)

# rows = sheet0.nrows
# cols = sheet0.ncols
print(sheet0.nrows)

destFile = 'dest.xls'
rb = xlrd.open_workbook(os.path.join(directory, destFile))
wb = copy(rb)
ws = wb.get_sheet(0)

for i in range(0, sheet0.nrows):
    row = sheet0.row_values(i)

    # 过滤非数字
    # date = row[0][: -4].replace('-', '')
    # date = date.replace('^', '')
    date = row[0][: -4]
    date = list(filter(lambda ch: ch in '0123456789', date))
    date = ''.join(date)

    print(date)
    ws.write(i, 0, date)

wb.save(destFile)
