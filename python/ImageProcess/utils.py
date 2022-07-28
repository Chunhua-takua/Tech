import cv2
import numpy as np


def getColumnNo(col):
    return ord(col) - ord('A')


# 判断是否为 None
def isNone(obj):
    if obj is None:
        return True
    return False


# 判断字符串 string 是否包含子字符串 substring
def isInclude(string, substring):
    if string.find(substring) > -1:
        return True
    return False


# 判断单元格内容是否为空
from xlwt import Style


def isEmpty(row):
    if row == '' or str(row).isspace():
        return True
    return False

# 读取图像，解决 imread 不能读取中文路径的问题
def cv_imread(file_path):
    cv_img = cv2.imdecode(np.fromfile(file_path, dtype=np.uint8), -1)
    return cv_img

# def write(self, row, col, label, style=Style.default_style):
#     self.sheet.write(row, col, label, style)
#
#     if col not in self.col_data
#
#
# def write_row(self, start_row, start_col, date_list,
#               style=Style.default_style):
#     for col, label in enumerate(date_list):
#         self.write()
