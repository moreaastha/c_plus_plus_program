#include <iostream>
using namespace std;
int main() 
{
    int BA, w, x, i, j, M, N, U1, L1, U2, L2;
    cout<<"Enter the base address: ";
    cin>>BA;
    cout<<"Enter the space of elements: ";
    cin>>w;
    cout<<"Enter the lower bound: ";
    cin>>L1;
    cout<<"Enter the upper bound: ";
    cin>>U1;
    cout<<"Enter the lower bound 2: ";
    cin>>L2;
    cout<<"Enter the upper bound 2: ";
    cin>>U2;
    cout<<"Enter the value of i: ";
    cin>>i;
    cout<<"Enter the value of j: ";
    cin>>j;
    M = U1 - L1 +1;
    N = U2 - L2 +1;
    x = BA + w * (N * (i - L1) + (j - L2));
    cout<<"The ans is: "<<x<<endl;
    return 0;
}    