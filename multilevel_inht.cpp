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
    int c;
    void addition()
    {
        c = a + b;
        cout<<"The sum of a and b is: "<<c<<endl;
    }
};
class product : public sum
{
    public:
    int d;
    void multiplication()
    {
        d = c * c;
        cout<<"Product of sum is: "<<d<<endl;
    }
};
int main()
{
    product p;
    p . input();
    p . addition();
    p . multiplication();
    return 0;
}    

