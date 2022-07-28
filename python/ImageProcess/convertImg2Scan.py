import os

from pythonProject.Scanner import Scanner

if __name__ == "__main__":
    # 读取文件列表
    path = './pics/1/'
    file_list = os.listdir(path)

    count = 0
    for file in file_list:
        file_name = os.path.join(path, file)
        print('Converting ' + file_name + '...')
        scan = Scanner(file_name, count)
        scanned_im = scan.Scan_View()

        print('Saved')
        count += 1
