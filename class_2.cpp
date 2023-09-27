#include <iostream>
using namespace std;
class A
{
    public:
    void num()
    {
        for(int i = 0; i < 10; i++)
        {
           cout<<i<<" ";
        }
    }
};
class B
{
    public:
    void sum()
    {
        int sum = 0;
        for(int i = 0; i < 10; i++)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    A ob;
    ob.num();
    B obj;
    obj.sum();
    return 0;
}