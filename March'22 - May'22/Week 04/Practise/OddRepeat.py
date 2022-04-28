def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1
    arr = get_array()
    n = arr[0]
    k = arr[1]
    sum = arr[2]

    reqSum = 0
    i = 1
    while i < (2*n):
        reqSum += i
        i += 2
    for i in range(1, 2*n):
        if((((k - 1) * i) + reqSum) == sum):
            print(i)
            break
        i += 2
