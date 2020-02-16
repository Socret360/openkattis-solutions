# https://open.kattis.com/problems/trik
sequence = input()
cups = [1, 0, 0]

for move in sequence:
  if move == 'A':
    temp = cups[0]
    cups[0] = cups[1]
    cups[1] = temp
  elif move == 'B':
    temp = cups[1]
    cups[1] = cups[2]
    cups[2] = temp
  elif move == 'C':
    temp = cups[0]
    cups[0] = cups[2]
    cups[2] = temp
  else:
    print("unknown move")

print(cups.index(1) + 1)
