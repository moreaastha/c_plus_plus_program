#include <iostream>
using namespace std;
class A
{ 
    public:
    string name;
    int rollno;
    string branch;
};
int main()
{
	A ob;
	ob.name="Aastha";
	ob.rollno=37;
	ob.branch="CSE";
    cout<<"The student name is: "<<ob.name<<endl;
    cout<<"The student roll no. is: "<<ob.rollno<<endl;
    cout<<"The student branch is: "<<ob.branch<<endl;
	return 0;
}