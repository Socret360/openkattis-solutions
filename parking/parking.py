# https://open.kattis.com/problems/parking

prices = [int(p) for p in input().split(" ")]
n_trucks = 3

intervals = []
for i in range(n_trucks):
  interval = [int(t) for t in input().split(" ")]
  intervals.append(interval)

maxTime = max(list(map(max, intervals)))  # get max time
minTime = min(list(map(min, intervals)))  # get min time

timeline = [0] * (maxTime - minTime + 1)

for interval in intervals:
  start = interval[0]
  end = interval[1]
  for i in range(start, end):
    index = i - minTime
    timeline[index] += 1

total = 0

for i in range(len(timeline)):
  val = timeline[i]
  if val != 0:
    total += (val * prices[val - 1])

print(total)
