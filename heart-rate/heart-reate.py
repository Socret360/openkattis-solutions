# https://open.kattis.com/problems/heartrate

cases = int(input())

for i in range(cases):
  case = input()
  case = case.split(" ")
  b = int(case[0])
  p = float(case[1])
  abpm = 60.0 / p
  bpm = (60.0 * b) / p
  min_abpm = bpm - abpm
  max_abpm = bpm + abpm
  print("{a:.4f} {b:.4f} {c:.4f}".format(a=min_abpm, b=bpm, c=max_abpm))
