//超级素数:该数本身，所有数字之和，所有数字之积，所有数字平方和都是素数
//100-9999超级素数的个数+超级素数之和+最大的超级素数
#include <stdio.h>
int primesum(int a);
int primeproduct(int a);
int primesquare(int a);
int prime(int a);
void SelectionSort(int a[],int m)//排序函数从大到小 
{
int i,j,tem,p,q,t;
int index;
for (i=0;i<m-1;i++)
 { 
 index=i; 
 for(j=i+1;j<m;j++)
  if(a[j]>a[index])
  index=j;	
 if(i!=index)
  {
  tem=a[i];a[i]=a[index];a[index]=tem;	
  }
 }
}
int main()
{
 int i,j,a,b,c,t[10000]={0},m=0,n=0,k[10000]={0};//m个数n和 
 for(i=100;i<10000;i++)
 {
  a=primesum(i);
  b=primeproduct(i);
  c=primesquare(i);
  if(prime(i)!=0&&prime(a)!=0&&prime(b)!=0&&prime(c)!=0)
  t[i]=1;	
 }
 i=0; 
 for(j=100;j<10000;j++)
 {
  m=m+t[j];	
  if(t[j]==1)
  {k[i]=j;i++;}	
 }
 SelectionSort(k,10000);
 for(j=0;j<10000;j++)
 {n=n+k[j];}
 printf("%d %d %d",m,n,k[0]);
return 0; 
} 
int primesum(int a)//分解并求和 
{
 int b[4],j,i=0,sum=0;
 while(a!=0)
 {
  b[i]=a%10;
  a=a/10;
  i++;	 
 }
 for(j=0;j<i;j++)
 {sum=sum+b[j];}	
return sum; 
}
int primeproduct(int a)
{
 int b[4],j,i=0,product=1;
 while(a!=0)
 {
  b[i]=a%10;
  a=a/10;
  i++;	 
 }
 for(j=0;j<i;j++)
 {product=product*b[j];}
return product; 	
}
int primesquare(int a)
{
 int b[4],j,i=0,square=0;
 while(a!=0)
 {
  b[i]=a%10;
  a=a/10;
  i++;	 
 }
 for(j=0;j<i;j++)
 {square=square+b[j]*b[j];}
return square; 
}
int prime(int a)
{
  int i,j;	
  for(i=2;i<a;i++)
 {
  j=a%i;
  if(j==0)
  break;	
 }
return j; 	//j=0不是 
} 
 
