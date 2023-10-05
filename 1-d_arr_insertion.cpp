#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int max = 5, pos, data;
    cout<<"pos"<<endl;
    cin>>pos;
    if(pos >= max)
    {
        cout<<"overflow!";
    }
    else
    {
        cout<<"Enter data to insert "<<endl;
        cin>>data;
        arr[pos] = data;
        for(int i=0; i<max; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}