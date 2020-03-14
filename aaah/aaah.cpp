#include <string>
#include <iostream>

int main()
{
  std::string jon, doctor;
  std::cin >> jon;
  std::cin >> doctor;

  if (jon.length() >= doctor.length())
  {
    std::cout << "go";
  }
  else
  {
    std::cout << "no";
  }
  return 0;
}