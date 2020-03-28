# https://open.kattis.com/problems/onechicken

inputs = input()
inputs = inputs.split(" ")

N = int(inputs[0])
M = int(inputs[1])

diff = M - N

if diff > 0:
  if diff == 1:
    print(f"Dr. Chaz will have {diff} piece of chicken left over!")
  else:
    print(f"Dr. Chaz will have {diff} pieces of chicken left over!")
else:
  if diff == -1:
    print(f"Dr. Chaz needs {abs(diff)} more piece of chicken!")
  else:
    print(f"Dr. Chaz needs {abs(diff)} more pieces of chicken!")
