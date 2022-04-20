def get_array():
    return list(map(int, input().split()))


array = get_array()
R = array[0]
O = array[1]
C = array[2]
remainOvers = 20 - O
maxCRuns = (remainOvers * 36) + C
if(maxCRuns > R):
    print("YES")
else:
    print("NO")
