def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1

    arr = get_array()
    n = arr[0]
    x = arr[1]
    y = arr[2]
    if((n+1) * y >= x):
        print("YES")
    else:
        print("NO")
