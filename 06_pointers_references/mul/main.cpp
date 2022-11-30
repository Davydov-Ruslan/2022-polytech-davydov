#include <iostream>
#include "functions.h"

int main() 
{
  std::cout << "65 * 5 = "<< mul("55", "5") << std::endl;
  std::cout << "1 * 6 = "<< mul("1", "6") << std::endl;
  std::cout << "3 * 3 = "<< mul("3", "3") << std::endl;
  std::cout << "5 * 0 = "<< mul("5", "0") << std::endl;
  return 0;
}