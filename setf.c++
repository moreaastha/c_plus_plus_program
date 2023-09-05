#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout << "Value";

    cout.setf(ios::right, ios::adjustfield);
    cout.width(15);
    cout << "Sqrt of value" << "\n";

    cout.fill('.');
    cout.precision(4);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.setf(ios::fixed, ios::floatfield);

    for(int n=1; n<=10; n++)
    {
        cout.setf(ios::internal, ios::adjustfield);
        cout.width(20);
        cout << sqrt(n) << "\n";
    }
    cout.setf(ios::scientific, ios::floatfield);
    cout << "\nSqrt(100) = " << sqrt(100) << "\n";

    return 0;
}    