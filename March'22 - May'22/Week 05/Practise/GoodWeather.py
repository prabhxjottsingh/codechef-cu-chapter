def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1

    arr = get_array()
    sunnyDays = 0
    rainyDays = 0
    for i in range(7):
        if(arr[i] == 1):
            sunnyDays += 1
        else:
            rainyDays += 1
    if(sunnyDays > rainyDays):
        print("YES")
    else:
        print("NO")
