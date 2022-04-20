def get_array():
    return list(map(int, input().split()))


testCases = int(input())
while testCases > 0:
    testCases -= 1
    arrayForStoringPlayerOneStats = get_array()
    arrayForStoringPlayerTwoStats = get_array()
    thisIsVariableForStoringPlayerOneScore = 0
    thisIsVariableForStoringPlayerTwoScore = 0
    for i in range(len(arrayForStoringPlayerOneStats)):
        if(arrayForStoringPlayerOneStats[i] > arrayForStoringPlayerTwoStats[i]):
            thisIsVariableForStoringPlayerOneScore += 1
        else:
            thisIsVariableForStoringPlayerTwoScore += 1
    if(thisIsVariableForStoringPlayerTwoScore < thisIsVariableForStoringPlayerOneScore):
        print("A")
    else:
        print("B")
