# 统计性别比
# excel 中的数据格式：
# M
# M
# F
# M,M,F
# F
# M
# M
# M
# M
# M

import xlrd
import os

COL_P = ord('P') - ord('A')

directory = './excels/'
srcFile = 'output.xls'

path = os.path.join(directory, srcFile)
book1 = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = book1.sheet_by_index(0)

# list = []
female_num = 0
male_num = 0
for i in range(0, sheet0.nrows):
    row = sheet0.row_values(i)
    print(row[COL_P].split(','))
    for e in row[COL_P].split(','):
        if e == 'F':
            female_num += 1
        elif e == 'M':
            male_num += 1

    # list.append(row[COL_P].split(","))

# print(list)
print(female_num)
print(male_num)
