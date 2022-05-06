def get_array():
    return list(map(int, input().split()))


tc = int(input())
while tc > 0:
    tc -= 1

    arr = get_array()
    M = arr[0]
    N = arr[1]
    K = arr[2]
    if(N * K < M):
        print("YES")
    else:
        print("NO")
