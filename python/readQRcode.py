'''
Author: tka zhuoia@163.com
Date: 2022-04-20 22:09:54
LastEditors: tka zhuoia@163.com
LastEditTime: 2022-07-05 12:58:30
FilePath: \bitcoind:\PycharmProjects\pythonProject\readQRcode.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import zxing

reader = zxing.BarCodeReader()
barcode = reader.decode("QR1.jpg")
print(barcode.parsed)
