def get_array():
    return list(map(int, input().split()))


def isPossible(x):
    mp = {1: 0, 2: 0, 3: 0, 4: 0, 5: 0, 6: 0, 7: 0, 8: 0, 9: 0, 0: 0}
    while x > 0:
        lastDig = x % 10
        mp[lastDig] += 1
        x //= 10
    for i in range(10):
        if(mp[i] > 1):
            return False
    return True


tc = int(input())
while tc > 0:
    tc -= 1
    n = int(input())
    # isPossible(n)
    n += 1
    while True:
        if(isPossible(n)):
            print(n)
            break
        n += 1
