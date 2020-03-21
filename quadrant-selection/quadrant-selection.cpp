// https://open.kattis.com/problems/quadrant

#include <string>
#include <iostream>

int main()
{
  std::string xStr, yStr;
  std::int32_t x, y;
  std::cin >> xStr;
  std::cin >> yStr;

  x = std::stoi(xStr);
  y = std::stoi(yStr);

  if (x >= 0 && y >= 0)
  {
    std::cout << "1";
  }
  else if (x < 0 && y >= 0)
  {
    std::cout << "2";
  }
  else if (x < 0 && y < 0)
  {
    std::cout << "3";
  }
  else if (x >= 0 && y < 0)
  {
    std::cout << "4";
  }

  return 0;
}