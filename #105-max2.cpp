#include <iostream>
using namespace std;
int main()
{
  int a, b, maxi;
  std::cout << "a="; std::cin >> a;
  std::cout << "b="; std::cin >> a;
  if (a>b) {
    maxi=a;
  }
  else
    maxi=b;
  std::cout << "nr max=" << maxi << '\n';
}
