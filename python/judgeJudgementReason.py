# 分析终结执行的原因
# 利用正则表达式匹配 Y 列（裁判理由）中的关键字

import re
import xlrd
import os
from xlutils.copy import copy
from utils import getColumnNo, isNone

# 裁判理由
COL_Y = getColumnNo('Y')
# 终结执行的原因
COL_Z = getColumnNo('Z')

# type 1
MISSING = "下落不明"
# type 2
ENFORCEABLE_PROPERTY = "未发现可供执行的财产"
ENFORCEABLE_PROPERTY_1 = "穷尽财产调查措施"
ENFORCEABLE_PROPERTY_2 = "执行措施已穷尽"
ENFORCEABLE_PROPERTY_3 = '(未|没有)发现(.*?)可供(立即执行)?执行(的?)财产'
ENFORCEABLE_PROPERTY_4 = '未(.*?)找到(.*?)可供执行的财产'
ENFORCEABLE_PROPERTY_5 = "无(其他|其它)?可供执行(的)?财产"
ENFORCEABLE_PROPERTY_6 = "不能提供被执行人可供执行的财产线索"
ENFORCEABLE_PROPERTY_7 = "未(能)?提供(.*?)财产线索"
ENFORCEABLE_PROPERTY_8 = '(暂无|没有)可供执行的财产'
ENFORCEABLE_PROPERTY_9 = "未查找到被执行人有其他可供执行的财产"
ENFORCEABLE_PROPERTY_10 = "(无|未发现)(可供立即)?(执行)?财产(.*?)线索"
ENFORCEABLE_PROPERTY_11 = "无财产可供执行"
ENFORCEABLE_PROPERTY_12 = "无可处置的财产"
# type 3
WITHDRAWAL = "自愿撤回执行申请"
WITHDRAWAL_1 = '撤回执行申请'
WITHDRAWAL_2 = '撤销申请'
WITHDRAWAL_3 = '申请撤回'
# type 4
COMPROMISE = "和解"
COMPROMISE_1 = "和解(协议)?"
COMPROMISE_2 = '达成要求协商解决'
# type 5
EXECUTION_OPPOSITION = "执行异议之诉"
# type 6
DEATH = "死亡"
# type 7
DELAY = '延期履行'
# type 8
AGREE = '申请执行人同意'
AGREE_1 = '申请(执行)?人同意(终结)?'
AGREE_2 = '申请执行人申请本案终结'
AGREE_3 = '申请执行人(.*?)同意'
AGREE_4 = '经申请执行人(.*?)同意'
# type 9.
PARTITION = '参与分配函'
# type 10.
INSTALLMENT = '分期履行'
# type 11.
BANKRUPTCY = '破产'
BANKRUPTCY_1 = '公司(的)?破产'

directory = './excels/'
srcFile = 'output.xls'

path = os.path.join(directory, srcFile)

rb = xlrd.open_workbook(os.path.join(directory, srcFile))
sheet0 = rb.sheet_by_index(0)

wb = copy(rb)
ws = wb.get_sheet(0)

# 统计每种原因的数量
missing = 0
noEnforceable = 0
withdrawal = 0
compromise = 0
executionOpposition = 0
death = 0
delay = 0
agree = 0
partition = 0
installment = 0
bankruptcy = 0

for i in range(1, sheet0.nrows):
    row = sheet0.row_values(i)
    print(row)

    row[COL_Z] = ''

    # type 1 下落不明
    if not isNone(re.search(MISSING, row[COL_Y]))\
            and isNone(re.search('车辆(.*?)下落不明', row[COL_Y])):
        row[COL_Z] += MISSING + ','
        missing += 1

    # type 2 未发现可供执行的财产
    if not isNone(re.search(ENFORCEABLE_PROPERTY, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_1, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_2, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_3, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_4, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_5, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_6, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_7, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_8, row[COL_Y])) \
            or not isNone(re.search(ENFORCEABLE_PROPERTY_9, row[COL_Y]))\
            or not isNone(re.search(ENFORCEABLE_PROPERTY_10, row[COL_Y]))\
            or not isNone(re.search(ENFORCEABLE_PROPERTY_11, row[COL_Y]))\
            or not isNone(re.search(ENFORCEABLE_PROPERTY_12, row[COL_Y])):
        row[COL_Z] += ENFORCEABLE_PROPERTY + ','
        noEnforceable += 1

    # type 3 自愿撤回执行申请
    if not isNone(re.search(WITHDRAWAL, row[COL_Y])) \
            or not isNone(re.search(WITHDRAWAL_1, row[COL_Y]))\
            or not isNone(re.search(WITHDRAWAL_2, row[COL_Y]))\
            or not isNone(re.search(WITHDRAWAL_3, row[COL_Y])):
        row[COL_Z] += WITHDRAWAL + ','
        withdrawal += 1

    # type 4 和解协议
    if not isNone(re.search(COMPROMISE, row[COL_Y])) \
            or not isNone(re.search(COMPROMISE_1, row[COL_Y]))\
            or not isNone(re.search(COMPROMISE_2, row[COL_Y])):
        row[COL_Z] += COMPROMISE + ','
        compromise += 1

    # type 5 执行异议之诉
    if not isNone(re.search(EXECUTION_OPPOSITION, row[COL_Y])):
        row[COL_Z] += EXECUTION_OPPOSITION + ','
        executionOpposition += 1

    # type 6 死亡
    if not isNone(re.search(DEATH, row[COL_Y])):
        row[COL_Z] += DEATH + ','
        death += 1

    # type 7 延期履行
    if not isNone(re.search(DELAY, row[COL_Y])):
        row[COL_Z] += DELAY + ','
        delay += 1

    # type 8 申请执行人同意
    if not isNone(re.search(AGREE, row[COL_Y])) \
            or not isNone(re.search(AGREE_1, row[COL_Y]))\
            or not isNone(re.search(AGREE_2, row[COL_Y]))\
            or not isNone(re.search(AGREE_3, row[COL_Y]))\
            or not isNone(re.search(AGREE_4, row[COL_Y])):
        row[COL_Z] += AGREE + ','
        agree += 1

    # type 9 参与分配函
    if not isNone(re.search(PARTITION, row[COL_Y])):
        row[COL_Z] += PARTITION + ','
        partition += 1

    # type 10 分期履行
    if not isNone(re.search(INSTALLMENT, row[COL_Y])):
        row[COL_Z] += INSTALLMENT + ','
        installment += 1

    # type 11 破产
    if not isNone(re.search(BANKRUPTCY_1, row[COL_Y])):
        row[COL_Z] += BANKRUPTCY + ','
        bankruptcy += 1

    print('writing... ' + row[COL_Z])
    ws.write(i, COL_Z, row[COL_Z])
    print('finished')

wb.save(path)

print('missing = ' + str(missing))
print('noEnforceable = ' + str(noEnforceable))
print('withdrawal = ' + str(withdrawal))
print('compromise = ' + str(compromise))
print('executionOpposition = ' + str(executionOpposition))
print('death = ' + str(death))
print('delay = ' + str(delay))
print('agree = ' + str(agree))
print('partition = ' + str(partition))
print('installment = ' + str(installment))
print('bankruptcy = ' + str(bankruptcy))
