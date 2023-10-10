#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<" Enter the value of a: ";
    cin>>a;
    cout<<" Enter the value of b: ";
    cin>>b;
    cout<<" Enter the value of c: ";
    cin>>c;
    if (b>a)
    {
        if (b>c)
        {
            cout<<"The value of b is greatest";
        }
        else
        {
            cout<<"The value of c is greatest";
        }
    }
    else
    {
        cout<<"The value of a is greatest";
    }
    return 0;
}