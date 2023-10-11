#include <iostream>
using namespace std;
int main()
{
    int n, i, table;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i = 1; i <= 10; i++)
    {
        table = i * n;
        cout<<table<<endl;
    }
    return 0;
}