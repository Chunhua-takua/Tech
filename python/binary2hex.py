# 二进制转十六进制
# 78b7de97f76475c9c01593085ff097d7c0f9603d

list = ['0000', '0001', '0010', '0011',
        '0100', '0101', '0110', '0111',
        '1000', '1001', '1010', '1011',
        '1100', '1101', '1110', '1111']

input_str = input('请输入待转十六进制数：')

binary_string = ''
for ch in input_str:
    # print(ch + ' ')
    if ch == '0':
        binary_string += list[0]
    elif ch == '1':
        binary_string += list[1]
    elif ch == '2':
        binary_string += list[2]
    elif ch == '3':
        binary_string += list[3]
    elif ch == '4':
        binary_string += list[4]
    elif ch == '5':
        binary_string += list[5]
    elif ch == '6':
        binary_string += list[6]
    elif ch == '7':
        binary_string += list[7]
    elif ch == '8':
        binary_string += list[8]
    elif ch == '9':
        binary_string += list[9]
    elif ch == 'a':
        binary_string += list[10]
    elif ch == 'b':
        binary_string += list[11]
    elif ch == 'c':
        binary_string += list[12]
    elif ch == 'd':
        binary_string += list[13]
    elif ch == 'e':
        binary_string += list[14]
    elif ch == 'f':
        binary_string += list[15]


print(binary_string)
