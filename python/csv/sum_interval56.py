import csv
import numpy as np
from numpy import *
import os

count = 56
countries = 43


# filename = "./example.csv"
# filename = "./2000.WIOD2016.L3_6_FVA_INT.MEX.csv"

dir = './dir/'

for filename in os.listdir(dir):
    if filename.endswith('.csv'):
        with open(os.path.join(dir, filename)) as file:
            print(filename, "found. Starting process.")

            reader = csv.reader(file)
            lines = []
            for l in reader:
                lines.append(l)
            # print(len(lines))
            # print(lines[len(lines) - 1])

            lastLine = lines[len(lines) - 1]
            # print(lastLine.pop(0))
            print("lastLine: ", lastLine)


            # count = 2
            # countries = 2
            result = []
            lastLine.pop(0)
            for i in range(countries):
                addedValue = 0.0
                for j in range(count):
                    addedValue += float(lastLine.pop(0))
                result.append(addedValue)

            print(result)

            with open(os.path.join(dir, filename), 'a', newline='') as file:
                writer = csv.writer(file)
                writer.writerow(result)

            print(filename, " complete.")