# https://open.kattis.com/problems/aboveaverage


def average(scores):
  s = 0
  for score in scores:
    s += score
  return s / len(scores)


n_tests = input()
n_tests = int(n_tests)

for i in range(n_tests):
  data = input()
  data = [int(i) for i in data.split(" ")]
  scores = data[1:]
  avg = average(scores)
  n_above_avg = len([score for score in scores if score > avg])
  percent_above_avg = (n_above_avg / len(scores)) * 100
  print("{0:.3f}%".format(percent_above_avg))
