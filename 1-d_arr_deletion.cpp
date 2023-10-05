#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {1,2,3,4,5};
	int max=5,pos;
	cout<<"pos ";
	cin>>pos;
	arr[pos] = 0;
    for(int i=0; i<max; i++)
    {
		cout<<arr[i]<<" ";
	}

	return 0;
	}
