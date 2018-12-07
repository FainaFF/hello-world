#include <stdio.h> 
int main (void)
{float a,b,c,d,e,f,x,y,m,n;
 scanf ("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
 m=a*e-b*d;n=c*d-a*f;
 if(m==0&&n==0)
 {printf("有无数解");}
 else if(m==0&&n!=0)
 {printf("无解");}
 else
 {
  x=(c*e-b*f)/(a*e-b*d);
  y=(a*f-c*d)/(a*e-b*d);
  printf ("x=%f,y=%f",x,y);
 }
 return 0; 
}
