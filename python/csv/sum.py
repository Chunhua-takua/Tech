import csv
import numpy as np
from numpy import *
import os

# srcBook = xlrd.open_workbook('./2000.WIOD2016.L3_6_FVA_INT.MEX.csv')

# filename = "./2000.WIOD2016.L3_6_FVA_INT.MEX.csv"
# filename = "./example.csv"
dir = './dir/'
result = []

# 获取dir路径下的csv文件名
first_row = True
for filename in os.listdir(dir):
    result = []
    if filename.endswith('.csv'):
        print(filename, " found. Starting process.")

        with open(os.path.join(dir, filename)) as file:
            reader = csv.reader(file)
            for row in reader:
                result.append(row)
            print("result = ", result)

            result_num = []
            # first_row = True
            for row in result:
                if first_row:
                    first_row = False
                    continue

                if row and not first_row:
                    row.pop(0)
                    temp = [0]
                    for num in row:
                        # print("num: ", num)
                        temp.append(float(num))
                            # result_num.append(list(map(float, row)))
                        # else:
                            # result_int.append(float(num))
                    # print("temp = ", temp)
                    result_num.append(temp)

            first_row = True
            # print("result_int: ", result_num)
            sum = np.sum(result_num, axis=0)
            # print("Sum: ", sum)

        # Write
        with open(os.path.join(dir, filename), 'a', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(sum)

        print(filename, " complete.")


