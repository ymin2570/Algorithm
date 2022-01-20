"""
def d(n):
    if n < 100:
        num = n + (n // 10) + (n % 10)
    elif n < 1000:
        num = n + (n // 100) + (n % 100 // 10) + (n % 10)
    elif n < 10000:
        num = n + (n // 1000) + (n % 1000 // 100) + (n % 100 // 10) + (n % 10)
    elif n == 10000:
        num = n + 1
    return num
"""
def d(n):
    for num in str(n):
        n += int(num)
    return n

values = set(range(1,10001))
compare = set()
for i in range(1,10001):
    compare.add(d(i))
self_num = sorted(values - compare)
for j in self_num:
    print(j)