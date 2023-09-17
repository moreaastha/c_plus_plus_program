#include <iostream>
using namespace std;
class add
{
    public:
    int a,b;
    void input()
    {
        cout<<"Enter value of a: ";
        cin>>a;
        cout<<"Enter value of b: ";
        cin>>b;
    }
};
class sum : public add
{
    public:
    void addition()
    {
        int c = a + b;
        cout<<"The sum of a and b is: "<<c<<endl;
    }
};
class product : public add
{
    public:
    void multiplication()
    {
        int d = a * b;
        cout<<"Product of a and b is: "<<d<<endl;
    }
};
int main()
{
    sum s;
    product p;
    s . input();
    s . addition();
    p . input();
    p . multiplication();
    return 0;
}    

