#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int a, b, c, D, R1, R2;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    D = (b*b) - (4*a*c);
    R1 = ((-b) + sqrt(D)) / 2*a;
    R1 = ((-b) - sqrt(D)) / 2*a;
    if(D > 0 || D == 0)
    {
        cout<<"Roots are real and equal"<<endl;
        cout<<"Roots are: "<<R1<<R2<<endl;
    }
    else
    {
        cout<<"Roots are imaginary"<<endl;
    }
    return 0;
}