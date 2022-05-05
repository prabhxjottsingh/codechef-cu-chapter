def get_array():
    return list(map(int, input().split()))

def solve(A, B, C):

   mp = [-1, 1]
   for i in range(2):
      tempA = A * mp[i]
      for i in range(2):
         tempB = B * mp[i]
         for i in range(2):
            tempC = C * mp[i]
            if(tempA + tempB + tempC == 0):
               print("YES")
               return;
   print("NO")

tc = int(input())
while tc > 0:
   tc -= 1
   arr = get_array()
   A = arr[0]
   B = arr[1]
   C = arr[2]
   solve(A, B, C)