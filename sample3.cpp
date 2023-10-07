#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int n1, n2, n3, n4, n5, s1, s2, s3, s4, s5;
    n1 = n / 10;
    s1 = n % 10;
    n2 = n1 / 10;
    s2 = n1 % 10;
    n3 = n2 / 10;
    s3 = n2 % 10;
    n4 = n3 / 10;
    s4 = n3 % 10;
    n5 = n4 / 10;
    s5 = n4 % 10;
    
    int sum = s1 + s2 + s3 + s4 + s5 + n5;
    cout<<sum;

    return 0;
}