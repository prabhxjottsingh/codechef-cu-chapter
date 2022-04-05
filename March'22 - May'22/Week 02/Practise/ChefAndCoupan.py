def get_array():
    return list(map(int, input().split()))


numberOfTestCases = int(input())
for i in range(numberOfTestCases):
    deliveryAndCoupan = get_array()
    arrayOne = get_array()
    arrayTwo = get_array()
    costOne = 0
    costTwo = 0
    for i in range(0, 3):
        costOne += arrayOne[i]

    for i in range(0, 3):
        costTwo += arrayTwo[i]

    buyCoupan = False

    if(costOne >= 150 and costTwo >= 150):
        if(costOne + 2*deliveryAndCoupan[0] + costTwo > costOne + costTwo + deliveryAndCoupan[1]):
            buyCoupan = True

    elif(costOne >= 150 or costTwo >= 150):
        if(costOne + 2*deliveryAndCoupan[0] + costTwo > costOne + costTwo + deliveryAndCoupan[0] + deliveryAndCoupan[1]):
            buyCoupan = True

    if(buyCoupan):
        print("YES")
    else:
        print("NO")
