#include <iostream>
using namespace std;
int main() 
{
    int BA, w, k,x;
    cout<<"Enter the base address: ";
    cin>>BA;
    cout<<"Enter the space of elements: ";
    cin>>w;
    cout<<"Enter the address to be searched: ";
    cin>>k;
    x = BA + (w * k);
    cout<<"The address of"<<"["<<k<<"]"<<"is: "<<x;
    return 0;
}    