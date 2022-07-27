# xlsx 文件在指定处增加空行

import openpyxl

file = './src.xlsx'
wb = openpyxl.load_workbook(file)
sheet = wb['Sheet1']

# 在第2行处增加一空行
# B 列
sheet.insert_cols(2)

# 保存
wb.save(file)
