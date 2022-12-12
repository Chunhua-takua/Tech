import hashlib
import datetime


def checkHash(data, n):
    for i in range(n):
        if data[i] == '0':
            continue
        else:
            return False
    return True



data = "Hello World!"

start = datetime.datetime.now()

nonce = 0
data += str(nonce)
data_sha = hashlib.sha256(data.encode('utf-8')).hexdigest()
while not checkHash(data_sha, 6):
    print(data_sha)
    nonce += 1
    data += str(nonce)
    data_sha = hashlib.sha256(data.encode('utf-8')).hexdigest()

end = datetime.datetime.now()


print(data_sha)
print('Found nonce:', nonce, ',', (end - start).seconds, 'seconds.')


