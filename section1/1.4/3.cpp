#include <iostream>
int main()
{
  int sum = 0, val = 10;
  while (val >= 1 )
  {
   sum += val;--val;
  }
  std::cout << "sum of 10 to 1 inclusive is "<< sum <<std::endl;
  return 0;
} 
