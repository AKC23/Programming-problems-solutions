n = int(input())

text1 = [input().split() for _ in range(n)]

key_value = {k: v for k, v in text1}

# print(text1)
# print(key_value)

for i in range(n):
    try:
        name = input()
        if name in key_value:
            print('%s=%s' % (name, key_value[name]))
        else:
            print('Not found')
    except:
        break