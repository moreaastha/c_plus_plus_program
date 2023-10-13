#include <iostream>
using namespace std;
int main()
{
  int a[5];
  int max=4;
  int ub=max-1;
  int loc;
  cout<<"enter the loc: ";
  cin>>loc;
  cout<<"enter the element "<<endl;
  for(int i=0;i<max;i++)
  {
      cin>>a[i];
  }
  if(max<0)
  {
      cout<<"underflow condition";
  }
  else
  {
      a[loc]=0;//x=15
      for(int i=loc;i<=ub;i++)
      {
          a[i]=a[i+1];
      }
      ub=ub-1;
      cout<<"new array"<<endl;
      for(int i=0;i<5;i++)
  {
      cout<<a[i]<<" ";
  }
  }

    return 0;
}