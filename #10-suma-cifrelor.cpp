#include <iostream>
using namespace std;
int main ()
{
    int nr, s=0;
    cin>>nr;
    while(nr!=0)
    {
        s=s+nr%10;
        nr=nr/10;
    }
    cout<<s<<'\n';
    return 0;
}
