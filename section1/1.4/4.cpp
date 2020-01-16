#include <iostream>
int main()
{
  std::cout <<"enter two numbers:"<<std::endl;
  int v1=0,v2=0;
  std::cin >> v1 >> v2;
  int a=1;
  while(v1 >= v2+1)
   { 
     v2 += a;
     std::cout << v2 <<std::endl;
     ++a;
   }
  return 0;
}
