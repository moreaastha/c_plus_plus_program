#include<iostream>
using namespace std;
int main()
{
    int F;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>F;

    int C = F - 2 * 32;
    cout<<"Temperature in celsius is: "<<C<<endl;

    return 0;
}