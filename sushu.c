#include <stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 if(n==0||n==1)
 printf("%d不是素数",n);
 else
 {
  for(i=2;i<n;i++)
  {
   j=n%i;
   if(j==0)
   break;	
  }
  if(j==0)
  printf("%d不是素数",n);
  else
  printf("%d是素数",n);
 }
return 0;	 
}
