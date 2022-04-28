def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1
    n = int(input())
    if(n % 4 == 0):
        print("North")
    elif (n % 4 == 1):
        print("East")
    elif(n % 4 == 2):
        print("South")
    else:
        print("West")
