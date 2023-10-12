#include <iostream>
using namespace std;

int main() 
{
    for (int i=0; i<=20; i++)
    {
        for (int j=0; j<=20; j++)
        {
            if (j==0 && i<=10 || i==10 || j==10 || i==20 && j<=10 || i==0 && j>=10 && j<=20 || j==20 && i>=10 && i<=20)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        
        cout<<endl;
    }

    return 0;
}