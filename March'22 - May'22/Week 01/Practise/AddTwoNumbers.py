def get_array():
  return list(map(int, input().split()))

numberOfTestCases = int(input())
for i in range(numberOfTestCases):
  arr = get_array()
  print(arr[1] + arr[0])