#include <iostream>
using namespace std;
class A
{
    public:
    int x,y,c;
    void add()
    {
        cout<<"Enter the values: "<<endl;
        cin>>x>>y;
        c = x + y;
        cout<<"The ans is: "<<c<<endl;
    }
};
int main() 
{
    A obj;
    cout<<obj.x<<endl<<obj.y<<endl;
    obj.add();
    cout<<obj.x<<endl<<obj.y<<endl;
    return 0;
}