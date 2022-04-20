def get_array():
    return list(map(int, input().split()))


def functionToCheckIfGivenNisLuckyOrNot(n):
    countPowersOfTwo = 0
    while (n % 2 == 0):
        countPowersOfTwo += 1
        n = n // 2
    if(countPowersOfTwo % 2 == 0):
        return True
    return False


testCases = int(input())
while testCases > 0:
    testCases -= 1
    n = int(input())
    if(functionToCheckIfGivenNisLuckyOrNot(n)):
        print(1)
    else:
        print(0)
