# 在 dir 目录下的每个 xlsx 文件的指定处增加空行

import os
import openpyxl

dir = './excels'
for file in os.listdir(dir):
    if file.endswith('.xlsx'):
        file_path = os.path.join(dir, file)
        print(file_path)

        wb = openpyxl.load_workbook(file_path)
        sheet = wb['Sheet1']
        # 在第2行处增加一空行
        sheet.insert_rows(2)

        # 保存
        print("save")
        wb.save(file_path)
