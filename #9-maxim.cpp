#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int min = a, max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(b < min)
        min = b;
    if(c < min)
        min = c;
    cout << max - min;
    return 0;
}
