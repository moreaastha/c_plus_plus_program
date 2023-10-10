#include <iostream>
using namespace std;
int main() 
{
    long int num, x, y, z, p, q, r, s, t,ans;
    cout <<"Enter the value of number: ";
    cin >> num;
    x = num / 10;
    y = num % 10;
    z = x / 10;
    p = x % 10;
    q = z / 10;
    r = z % 10;
    s = q / 10;
    t = q % 10;
    ans = y * 10000 + p * 1000 + r * 100 + t * 10 + s * 1;
    cout<<ans<<endl;
}    