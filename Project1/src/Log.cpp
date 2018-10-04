#include <iostream>

void Log(const char* payload)
{
  std::cout << payload << std::endl;
}

void Log(const int payload)
{
  std::cout << payload << std::endl;
}
