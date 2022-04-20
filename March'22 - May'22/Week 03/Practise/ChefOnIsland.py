def get_array():
    return list(map(int, input().split()))


def checkSurvivalPossibleOrNot(x, y, xR, yR, d):
    if((xR * d) <= x and (yR * d) <= y):
        return True
    return False


tc = int(input())
while tc > 0:
    tc -= 1
    arr = get_array()
    x = arr[0]
    y = arr[1]
    xR = arr[2]
    yR = arr[3]
    d = arr[4]
    if(checkSurvivalPossibleOrNot(x, y, xR, yR, d)):
        print("YES")
    else:
        print("NO")
