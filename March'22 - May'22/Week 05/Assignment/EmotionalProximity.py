def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1
    arr = get_array()
    p = arr[0]
    x = arr[1]
    y = arr[2]
    z = arr[3]

    if(z == 1):
        p = p + (y/100)*p
    else:
        p = p - (x/100)*p
    print(p)
