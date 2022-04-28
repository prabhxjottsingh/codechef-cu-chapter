def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1
    arr = get_array()
    n = arr[0]
    if(n & 1):
        n += 1
    n //= 2
    cost = 0
    i = 1
    while i < 7:
        cost += arr[i]
        i += 1
    print(n*cost)
