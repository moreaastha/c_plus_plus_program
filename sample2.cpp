#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int max = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"The maximum number of array is"<<max<<endl;

    int min = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"The minimum number of array is"<<min<<endl;

    return 0;
}