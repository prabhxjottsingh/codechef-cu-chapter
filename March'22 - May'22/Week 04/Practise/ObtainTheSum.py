def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1
    arr = get_array()
    n = (int)(arr[0])
    s = (int)(arr[1])
    sum = (int)((n * (n + 1))//2)
    # sum = 100
    # s = 1
    # print(sum)
    diff = (int)(sum - s)
    # print(diff)
    if(diff <= n and diff > 0):
        print(diff)
    else:
        print(-1)
