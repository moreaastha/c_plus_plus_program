#include <iostream>
using namespace std;
class A 
{
    public:
    int x,y;
    void display()
    {
        cout<<"enter the values of x and y"<<endl;
        cin>>x>>y;
    }
};
class B:public A
{
    public:
    int c;
    void add()
    {
        c=x+y;
        cout<<c<<endl;
    }
};
class C:public A
{
    public:
    int z;
    void mult()
    {
        z=x*y;
        cout<<z<<endl;
    }
};
int main() 
{
    B obj;
    obj.display();
    obj.add();
    C ob;
    ob.display();
    ob.mult();
    return 0;
}