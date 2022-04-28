def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1
    arr = get_array()
    a = arr[0]
    b = arr[1]
    c = arr[2]
    if((a < b) and (a < c)):
        print("Draw")
    elif ((b < a) and (b < c)):
        print("Bob")
    else:
        print("Alice")
