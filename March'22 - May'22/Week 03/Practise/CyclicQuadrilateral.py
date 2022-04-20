def get_thisIsAnArrayay():
    return list(map(int, input().split()))


def isCyclicQuad(firstAngle, secondAngle, thirdAngle, fourthAngle):
    if((firstAngle + thirdAngle == secondAngle + fourthAngle) and (secondAngle + fourthAngle == 180)):
        return True
    return False


testCases = int(input())
while testCases > 0:
    testCases -= 1
    thisIsAnArray = get_thisIsAnArrayay()
    if(isCyclicQuad(thisIsAnArray[0], thisIsAnArray[1], thisIsAnArray[2], thisIsAnArray[3])):
        print("YES")
    else:
        print("NO")
