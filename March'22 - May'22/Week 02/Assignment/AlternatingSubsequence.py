def get_array():
    return list(map(int, input().split()))


numberOfTestCases = int(input())
for i in range(numberOfTestCases):
    n = int(input())
    arr = get_array()
    sumEven = 0
    sumOdd = 0
    j = 0
    while j < n:
        sumEven += arr[j]
        j += 2
    j = 1
    while j < n:
        sumOdd += arr[j]
        j += 2
    print(max(sumOdd, sumEven))
