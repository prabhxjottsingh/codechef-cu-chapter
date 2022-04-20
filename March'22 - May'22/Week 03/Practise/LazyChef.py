def get_array():
    return list(map(int, input().split()))


testCases = int(input())
while testCases > 0:
    testCases -= 1
    array = get_array()
    print(min(array[0] * array[1], array[0] + array[2]))
