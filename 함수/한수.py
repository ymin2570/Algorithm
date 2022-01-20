def func(num):
    length = len(str(num))
    if length < 3:
        return True
    else:
        diff = int(str(num)[0]) - int(str(num)[1])
        for i in range(1,length-1):
            if diff != int(str(num)[i]) - int(str(num)[i+1]):
                return False
            else:
                return True


N = int(input(""))
res = 0
for i in range(1,N+1):
    if(func(i) == True):
        res += 1
print(res)