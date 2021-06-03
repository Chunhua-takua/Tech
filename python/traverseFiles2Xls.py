# Traverse each file in the directory and output into an xls.
import os
import xlwt

dir = r'./dir/'
# dir = r'I:/DCIM/100EOS5D/'
# dir = r'E:\生物观察\大理\100EOS5D/'

desBook = xlwt.Workbook(encoding='utf-8', style_compression=0)
desSheet = desBook.add_sheet('dest', cell_overwrite_ok=True)

count = 0
for filename in os.listdir(dir):
    print(filename)

    desSheet.write(count, 0, filename)
    count += 1

desBook.save(r'.\destDrive.xls')
