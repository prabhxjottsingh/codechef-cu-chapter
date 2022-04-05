def get_array():
    return list(map(int, input().split()))


numberOfTestCases = int(input())
for i in range(numberOfTestCases):
    arrOne = get_array()
    countReqNumbers = 0
    arr = get_array()
    for j in range(0, arrOne[0]):
        if(((arr[j] + arrOne[1]) % 7) == 0):
            countReqNumbers += 1
    print(countReqNumbers)
