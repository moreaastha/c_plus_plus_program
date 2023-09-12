#include <iostream>
using namespace std;
int main() 
{
    int BA, w, k, x, LB;
    cout<<"Enter the base address: ";
    cin>>BA;
    cout<<"Enter the space of elements: ";
    cin>>w;
    cout<<"Enter the address to be searched: ";
    cin>>k;
    cout<<"Enter the value of lower bound: ";
    cin>>LB;
    x = BA + w * (k - LB);
    cout<<"The address of"<<"["<<k<<"]"<<"is: "<<x;
    return 0;
}    