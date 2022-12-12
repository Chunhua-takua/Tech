import xlrd
import os
from xlutils.copy import copy
from utils import isEmpty


directory = './'
# srcFile = '扬州宝装-2020.01-12月凭证.xlsx'
srcFile = '扬州宝装-2021.01-12月-凭证.xlsx'

book1 = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = book1.sheet_by_index(0)

rb = xlrd.open_workbook(os.path.join(directory, srcFile))
wb = copy(rb)
ws = wb.get_sheet(0)

# for i in range(1, 2):
modelList = []
for i in range(1, sheet0.nrows):
    row = sheet0.row_values(i)
    print(row)

    # 本行若不空
    if not isEmpty(row[0]) and not isEmpty(row[1])\
            and not isEmpty(row[2]) and not isEmpty(row[3])\
            and not isEmpty(row[4]):
        modelList = []
        for j in range(0, 5):
            modelList.append(row[j])

        continue

    # 本行若空，则将当前 modelList 写入
    if isEmpty(row[0]):
        print('copying...')
        for k in range(0, 5):
            ws.write(i, k, modelList[k])

    print()

wb.save(srcFile)
