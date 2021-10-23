#include <iostream>
using namespace std;
int main()
{
  int n, ogl;
  std::cout << "n=";std::cin >> n;
  while (n != 0)
  {
    ogl = ogl * 10 + n % 10;
    n = n / 10;
  }
  std::cout<<"oglindit=" << ogl <<'\n';
  return 0;
}
