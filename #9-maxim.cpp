#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    std::cout << "a=";std::cin >> a;
    std::cout << "b=";std::cin >> b;
    std::cout << "c=";std::cin >> c;
    int min = a, max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(b < min)
        min = b;
    if(c < min)
        min = c;
    cout <<"Maxim - minim =" << max - min << '\n';
    return 0;
}
