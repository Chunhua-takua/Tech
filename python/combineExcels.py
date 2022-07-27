# 将目录 ./excels/ 下的文件合并到一个文件中，输出到 ./output.xls 中
import os
import xlrd
import xlsxwriter

# 在下方输入合并后Excel的路径和文件名
work = xlsxwriter.Workbook('./output.xls')

# 新建一个sheet
sheet = work.add_worksheet('combine')

path = './excels'

# 读取文件列表
file_list = os.listdir(path)

# 排序
file_list.sort()

x1 = 1
for file in file_list:
    print(file)
    file_name = os.path.join(path, file)
    workbook = xlrd.open_workbook(file_name)
    sheet0 = workbook.sheet_by_index(0)
    rows = sheet0.nrows

    for i in range(rows):
        sheet.write_row('A'+str(x1), sheet0.row_values(i))
        x1 += 1

work.close()
