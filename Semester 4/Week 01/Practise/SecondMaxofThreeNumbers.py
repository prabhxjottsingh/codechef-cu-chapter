# Time Complexity: O(N * log N) (N = 3)
# Space Complexity: O(1)


def get_array():
  return list(map(int, input().split()))

numberOfTestCases = int(input())
for i in range(numberOfTestCases):
  arr = get_array()
  arr.sort()
  print(arr[1])