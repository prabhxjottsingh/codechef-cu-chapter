def get_array():
    return list(map(int, input().split()))


numberOfTestCases = int(input())
for i in range(numberOfTestCases):
    goldCoins = int(input())
    trianglesCount = -1
    incrementBy = 1
    initialCoins = 0
    while initialCoins <= goldCoins:
        initialCoins += incrementBy
        incrementBy += 1
        trianglesCount += 1
    print(trianglesCount)
