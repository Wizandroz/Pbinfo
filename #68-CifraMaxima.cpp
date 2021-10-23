#include <iostream>
using namespace std;
int main()
{
   int n, mx = 0;
   std::cout << "n=";std::cin >> n;
   while (n)
   {
      if (n % 10 > mx)
         mx = n % 10;
      n /= 10;
   }
   std::cout <<"cifra maxima=" << mx <<'\n';
   return 0;
}
