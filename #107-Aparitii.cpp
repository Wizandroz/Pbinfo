#include <iostream>
using namespace std;
int num, cif, ult, ap;
int main()
{
    cin >> num;
    ult=num%10; ap=1;
    num=num/10;
    while (num)
    {
        cif=num%10;
        if (cif==ult) ++ap;
        num=num/10;
    }
    cout << ap;
    return 0;
}
