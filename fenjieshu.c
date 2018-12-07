#include <stdio.h>
int main()
{
 int a,b[1000],j,i,n;
 scanf("%d",&a);
 i=0;
 while(a!=0)
 {
  b[i]=a%10;
  a=a/10;
  i++;	 
 }
 for(j=i-1;j>=0;j--)
 {printf("%d ",b[j]);}
return 0; 	
}
