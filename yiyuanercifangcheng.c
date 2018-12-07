#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,c,t,m,x1,x2;
 scanf("%f %f %f",&a,&b,&c);
 t=b*b-4*a*c;
 if(t<0)
  {printf("no root");}
 else if(t==0)
 {
  x1=((-1)*b)/(2*a);
  printf("x1=x2=%.2f",x1);
 }
 else
 {
  m=sqrt(t);
  x1=((-1)*b+m)/(2*a);
  x2=((-1)*b-m)/(2*a);
  printf("x1=%.2f,x2=%.2f",x1,x2);
 }	
return 0; 
}
