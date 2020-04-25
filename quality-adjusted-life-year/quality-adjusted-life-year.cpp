// https://open.kattis.com/problems/qaly
#include <iostream>

int main()
{
  int numHist;
  std::cin >> numHist;

  double accum = 0;

  for (int i = 0; i < numHist; i++)
  {
    double q, y;
    std::cin >> q >> y;

    accum += (q * y);
  }

  std::cout << accum;
}