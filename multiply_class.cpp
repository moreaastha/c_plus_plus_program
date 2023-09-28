#include <iostream>
using namespace std;
class input
{
    public:
    int a,b;
    void take()
    {
        cout<<"Enter the values of a and b: "<<endl;
        cin>>a>>b;
    }
};
class product : public input
{
    public:
    void multiply()
    {
        int mul = a * b;
        cout<<"The product of a and b is: "<<mul<<endl;
    }
};
int main()
{
    product obj;
    obj.take();
    obj.multiply();    
    return 0;
}