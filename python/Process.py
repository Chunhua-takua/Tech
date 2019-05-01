import xlrd
import xlwt

print("Creating workbook...")
desBook = xlwt.Workbook(encoding='utf-8', style_compression=0)
desSheet = desBook.add_sheet('dest', cell_overwrite_ok=True)

print("Reading source excel file src.xls...")
srcBook = xlrd.open_workbook('./src.xls')
sheet0 = srcBook.sheet_by_index(0)
rowData0 = sheet0.row_values(0)
# print(rowData)
numOfRows0 = sheet0.nrows
# print("numOfRows0", numOfRows0)

sheet1 = srcBook.sheet_by_index(1)
numOfRows1 = sheet1.nrows
# print(numOfRows1)


for i in range(numOfRows0):
    #print("i = ", i)
    
    
    rowData_sheet0 = sheet0.row_values(i)
    print("rowData_sheet0: ", rowData_sheet0)
    nation1_sheet0 = rowData_sheet0[0]

    print("nation1_sheet0: ", nation1_sheet0)

    # 有多少列
    length0 = len(rowData_sheet0)

    for j in range(numOfRows1):
        rowData_sheet1 = sheet1.row_values(j)

        nation1_sheet1 = rowData_sheet1[0]
        length1 = len(rowData_sheet1)

        if (nation1_sheet0 == nation1_sheet1):
            print("in if: ", nation1_sheet0)
            desSheet.write(j, 0, nation1_sheet1)
            for k in range(length0 - 1):
                desSheet.write(j, k + 1, rowData_sheet0[k + 1])
            for k in range(length1 - 1):
                print(rowData_sheet1[k + 1])
                desSheet.write(j, length0 + k, rowData_sheet1[k + 1])

desBook.save(r'.\dest.xls')
