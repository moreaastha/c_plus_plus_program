#include <iostream>
using namespace std;
int main() 
{
    int BA, w, k, x, z, i, j, M, N;
    cout<<"Enter the base address: ";
    cin>>BA;
    cout<<"Enter the space of elements: ";
    cin>>w;
    cout<<"Enter the address to be searched: ";
    cin>>k;
    cout<<"Enter the value of i and j: ";
    cin>>i>>j;
    cout<<"Enter the value of M and N: ";
    cin>>M>>N;
    cout<<"Enter 1 for row major and enter 0 for column major: ";
    cin>>z;
    if(z)
    {
        x = BA + w * (N * i + j);
        cout<<"The address of"<<"["<<k<<"]"<<"is: "<<x;
    }
    else
    {
        x = BA + w * (M * j + i);
        cout<<"The address of"<<"["<<k<<"]"<<"is: "<<x;
    }
    return 0;
}    