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
    void display()
    {
        c = a + b;
        cout<<"The sum of a and b is: "<<c<<endl;
    }
};
int main()
{
    sum s;
    s . input();
    s . display();
    return 0;
}    

