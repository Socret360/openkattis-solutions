#include <iostream>

int main()
{
  int X, N;
  std::cin >> X;
  std::cin >> N;

  int total = 0;

  for (int i = 0; i < N; i++)
  {
    int p;
    std::cin >> p;

    total += (X - p);
  }

  total += X;

  std::cout << total;

  return 0;
}