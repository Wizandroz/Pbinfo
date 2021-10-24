#include <iostream>
using namespace std;
int main()
{
   int n, mx = 0;
   cin >> n;
   while (n)
   {
      if (n % 10 > mx)
         mx = n % 10;
      n /= 10;
   }
   cout << mx;
   return 0;
}
