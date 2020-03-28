// https://open.kattis.com/problems/onechicken

#include <iostream>

int main()
{
  int N, M;
  std::cin >> N >> M;

  int diff = M - N;

  if (diff > 0)
  {
    if (diff == 1)
      std::cout << "Dr. Chaz will have " << diff << " piece of chicken left over!";
    else
      std::cout << "Dr. Chaz will have " << diff << " pieces of chicken left over!";
  }
  else
  {
    if (diff == -1)
      std::cout << "Dr. Chaz needs " << -diff << " more piece of chicken!";
    else
      std::cout << "Dr. Chaz needs " << -diff << " more pieces of chicken!";
  }

  return 0;
}