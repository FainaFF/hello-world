#include <stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
  j=n%i;
  if(j==0)
  break;	
 }
 if(j==0)
 printf("%d��������",n);
 else
 printf("%d������",n);
 return 0;	 
}
