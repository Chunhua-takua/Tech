import glob
import os

dir = r'./dir/'
# for files in os.walk(dir):
#     for file in files:
#         print(file)
#         # if file.split('.')[3] == 'csv':
#         #     print(file)

for file in os.listdir(dir):
    if file.endswith('.csv'):
        print(file)