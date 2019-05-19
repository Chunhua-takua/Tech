import xlrd
import os
from xlutils.copy import copy

# 表1是字典，其中key是iso1 + iso2，value是id
# 在表3中根据表1中的字典填入相应的id

# 表1，表2，表3放在dir目录下，处理完的文件保存在./下
dir = './files/'

iso_id_file = './files/表1.xls'
book1 = xlrd.open_workbook(iso_id_file)
iso_id_file_sheet0 = book1.sheet_by_index(0)

# iso1 + iso2 : id Dictionary
isoIdDict = {}

for i in range(1, iso_id_file_sheet0.nrows):
    row = iso_id_file_sheet0.row_values(i)
    isoIdDict[row[0] + '+' + row[1]] = row[2]

# 根据isoIdDict字典填写表3中的id字段
filename = '表3.xls'
rb = xlrd.open_workbook(os.path.join(dir, filename))
sheet0 = rb.sheet_by_index(0)
wb = copy(rb)
ws = wb.get_sheet(0)
print("ws=", ws)

for i in range(1, sheet0.nrows):
    row = sheet0.row_values(i)
    key = row[1] + '+' + row[3]
    value = isoIdDict[key]
    print("id =", value)

    ws.write(i, 8, value)

wb.save(filename)

