#include <iostream>
using namespace std;
int main() 
{
    float r, area, circum;
    cout <<"Enter the value of radius: ";
    cin >> r;
    circum = 2 * 3.14 * r;
    cout << "The circumference of circle is: "<<circum<<endl;
    area = 3.14 * r * r;
    cout << "The area of circle is: "<<area<<endl;
    return 0;
}