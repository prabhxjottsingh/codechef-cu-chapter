def get_array():
    return list(map(int, input().split()))


def findGCD(a, b):
    if(b == 0):
        return a
    else:
        return findGCD(b, a % b)


numberOfTestCases = int(input())
for i in range(numberOfTestCases):
    array = get_array()
    gcdOfTwoElements = findGCD(array[1], array[0])
    hcfOfTwoElements = (int)(array[1]*array[0]/gcdOfTwoElements)
    print(gcdOfTwoElements, hcfOfTwoElements)
