def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1

    arr = get_array()
    n = arr[0]
    x = arr[1]
    p = arr[2]
    if(((x) * 3) - (n-x) >= p):
        print("PASS")
    else:
        print("FAIL")
