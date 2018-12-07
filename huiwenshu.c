#include <stdio.h>
#include <math.h>
int main()
{
 int i,j,sum,n,a,m,t,b;
 int c[1000];
 scanf("%d\n",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a);
  b=a;
  j=0;
  while(a!=0)
  {
   c[j]=a%10;
   a=a/10;
   j++;	
  }	
  m=j;
  sum=0;
  for(t=0;t<m;t++)
  {
   sum=sum+c[t]*(pow(10,j-1));
   j--;	
  }
  if(b!=sum)
  {printf("no");}
  else
  {printf("yes");}
 } 
return 0;	
}
