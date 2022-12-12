import xlrd
import os
from xlutils.copy import copy

# 判断单元格内容是否为空
def isEmpty(row):
    if row == '' or str(row).isspace():
        return True
    return False

# 列号
def colNum(letter):
    return ord(letter) - ord('A')

directory = './'

# 1st
COL_A = 'A'
# 12th
COL_L = 'L'

# 待修改的列
toModify = COL_L

srcFile = '03 惠通：475474043984-总.xlsx'
# srcFile = 'test.xlsx'

book1 = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = book1.sheet_by_index(0)

print(sheet0.nrows)

rb = xlrd.open_workbook(os.path.join(directory, srcFile))
wb = copy(rb)
ws = wb.get_sheet(0)

# for i in range(5, sheet0.nrows):
for i in range(2, sheet0.nrows):
    row = sheet0.row_values(i)
    if row[1] == '' or str(row[1]).isspace():
        continue

    if i + 1 < sheet0.nrows:
        nextRow = sheet0.row_values(i + 1)
    else:
        break

    # print(len(row))
    print(row)

    if row[1] != '':
        print('row 1: ' + str(row[1]))
    if row[colNum(toModify)] != '':
        print('row ' + colNum(toModify) + ': ' + str(row[colNum(toModify)]))

    print('nextRow 1: ' + str(nextRow[1]))
    print('nextRow ' + colNum(toModify) + ': ' + str(nextRow[colNum(toModify)]))

    # 本行“序号”不空 且 待修改单元格不空 且 下一行“序号”空 且 待修改单元格不空
    if (row[1] != '' and row[colNum(toModify)] != '') \
            and (isEmpty(nextRow[1]) and not isEmpty(nextRow[colNum(toModify)])):
        print('joining')

        content = row[colNum(toModify)] + nextRow[colNum(toModify)]
        row[1] = content
        print('content: ' + content)

        ws.write(i, colNum(toModify), content)
        ws.write(i + 1, colNum(toModify), '')

        i = i + 2

    print()

wb.save(srcFile)
