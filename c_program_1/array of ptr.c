#include <stdio.h>
int main() 
{
  int a[4]={8,16,24,32},*P[4],i;
  for(i=0;i<4;i++)
     P[i]=&a[i];

  for(i=0;i<4;i++)
     printf("%d\t",*(*(P+i)));
  return 0;
}        