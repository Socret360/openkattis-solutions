// https://open.kattis.com/problems/twostones

#include <string>
#include <iostream>

int main()
{
  std::string stonesStr;
  std::int32_t stones;
  std::cin >> stonesStr;

  stones = std::stoi(stonesStr);

  if (stones % 2 == 0)
  {
    std::cout << "Bob";
  }
  else
  {
    std::cout << "Alice";
  }

  return 0;
}