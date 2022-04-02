def get_array():
    return list(map(int, input().split()))


numberOfTestCases = int(input())
for i in range(numberOfTestCases):
    arr = get_array()
    maxi = -1
    for i in range(1, arr[1]+1):
        temp = (arr[0] % i)
        if(maxi < temp):
            maxi = temp
    print(maxi)
