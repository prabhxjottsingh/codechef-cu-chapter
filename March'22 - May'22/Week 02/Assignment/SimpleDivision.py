def get_array():
    return list(map(int, input().split()))


numberOfTestCases = int(input())
for i in range(numberOfTestCases):
    count = 0
    arrayOne = get_array()
    arr = get_array()
    for j in range(0, arrayOne[0]):
        if(arr[j] % arrayOne[2] == 0 and arr[j] <= arrayOne[1]):
            count += 1
    print(count)
