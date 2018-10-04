#include <iostream>

#include "Log.h"
#include "Math.h"

int Multiply(int a, int b);

int main()
{
  Log("Hello World");

  Log(Multiply(6, 111));

  std::cin.get();
}