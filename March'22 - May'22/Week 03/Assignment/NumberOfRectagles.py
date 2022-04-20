def get_arrayay():
    return list(map(int, input().split()))


def functionToCountTheNumberOfRectangles(rows, colunms):
    res = (int)((rows * colunms * (rows + 1) * (colunms + 1)) / 4)
    return res


testCases = int(input())
while testCases > 0:
    testCases -= 1
    array = get_arrayay()
    finalCount = (functionToCountTheNumberOfRectangles(
        array[0], array[1]) - (array[0]*array[1]))
    print(finalCount)
