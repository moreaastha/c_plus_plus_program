#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int max=3;
	int item;
	cout<<"enter the value of item"<<endl;
	cin>>item;
	int loc;
	cout<<"enter the value of loc"<<endl;
	cin>>loc;
	cout<<"enter the array element"<<endl;
	for(int i=0;i<max;i++)
	{
		cin>>a[i];
	}
	int ub=max-1;
	if(ub==5-1)
	{
	    cout<<"overflow condition"<<endl;
	    
	}
	else
	{
	    for(int i=ub;i>=loc;i--)
	    {
	        a[i+1]=a[i];
	    }
	    a[loc]=item;
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
	}
