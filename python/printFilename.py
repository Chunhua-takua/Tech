import glob
import os

dir = r'./excels/'

for file in os.listdir(dir):
    if file.endswith('.xlsx'):
        print(file)