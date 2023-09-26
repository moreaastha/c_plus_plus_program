#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Hello everyone!!"<<endl;
    }
    ~A() 
    {
        cout<<"Destructor executed"<<endl;
    }
};
int main()
{
    A obj;
    return 0;
}