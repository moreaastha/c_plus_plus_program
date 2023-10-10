#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout <<"Enter the value of a: ";
    cin >> a;
    cout<<"Enter the value of b: ";
    cin>>b;
    if(a > b)
    {
        cout<<"The value of a is greater"<<endl;
    }
    else
    {
        cout<<"The value of b is greater"<<endl;            
    }
    return 0;
}