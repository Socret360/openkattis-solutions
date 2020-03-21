// https://open.kattis.com/problems/hissingmicrophone

#include <string>
#include <iostream>

int main()
{
  std::string word;
  std::cin >> word;

  if (word.find("ss") != std::string::npos)
  {
    std::cout << "hiss";
  }
  else
  {
    std::cout << "no hiss";
  }

  return 0;
}