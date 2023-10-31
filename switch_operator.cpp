#include<iostream>
using namespace std;
int main()
{
  int a,b;
    cout<<"Enter Two Numbers ";
    cin>>a>>b;

    char op;
    cout<<"Enter + / - / / / * -: ";
    cin>>op;

    switch(op){

        case '+':
            cout<<a+b;
            break;

        case '-':
            cout<<a-b;
            break;

        case '*':
            cout<<a*b;
            break;

        case '/':
            cout<<a/b;
            break;

        case '%':
            cout<<a%b;
            break;

        default:
            cout<<"Enter Valid Operater";
            break;
    }
    
    return 0;
}
