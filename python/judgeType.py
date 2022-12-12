# 判断执行标的的类型
# 根据裁决书名称中是否含有关键字判断
# 含有关键字（租赁、借款、银行卡、合伙协议纠纷、民间借贷），则认为标的是“财产”
# 否则标的是“非财产”

import xlrd
import os
from xlutils.copy import copy
from utils import isInclude

COL_C = 2

directory = './excels/'
srcFile = 'output.xls'

path = os.path.join(directory, srcFile)
book1 = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = book1.sheet_by_index(0)

rb = xlrd.open_workbook(os.path.join(directory, srcFile))
wb = copy(rb)
ws = wb.get_sheet(0)

sheet0 = book1.sheet_by_index(0)

print(sheet0.nrows)

# 统计标的为财产的数量
n = 0
# 统计标的为非财产的数量
m = 0

# 遍历每一行
for i in range(0, sheet0.nrows):
    row = sheet0.row_values(i)
    print(row[1])
    if len(row[1]) < 5:
        continue

    if isInclude(row[1], "租赁") \
            or isInclude(row[1], "借款")\
            or isInclude(row[1], "银行卡") \
            or isInclude(row[1], "信用卡") \
            or isInclude(row[1], "合伙协议纠纷") \
            or isInclude(row[1], "民间借贷") \
            or isInclude(row[1], "合同") \
            or isInclude(row[1], "劳动报酬") \
            or isInclude(row[1], "抚养费") \
            or isInclude(row[1], "劳动争议") \
            or isInclude(row[1], "赡养") \
            or isInclude(row[1], "保险") \
            or isInclude(row[1], "不当得利") \
            or isInclude(row[1], "福利待遇") \
            or isInclude(row[1], "追偿") \
            or isInclude(row[1], "财产"):
        print("财产")
        ws.write(i, COL_C, "财产")
        n += 1
    else:
        ws.write(i, COL_C, "非财产")
        m += 1

wb.save(path)

print(n)
print(m)
