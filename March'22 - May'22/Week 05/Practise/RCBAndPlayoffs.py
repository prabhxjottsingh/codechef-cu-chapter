def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1

    arr = get_array()
    x = arr[0]
    y = arr[1]
    z = arr[2]
    if(x + z*2 >= y):
        print("YES")
    else:
        print("NO")
