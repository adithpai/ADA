#include<stdio.h>
#include<stdlib.h>
void main()
{int m,n,gcd;
 printf("Enter 2 positive integers");
 scanf("%d%d",&m,&n);

while(m!=n)
{
 if(m>n)
 m=m-n;
 else
 n=n-m;
} 
printf("GCD =%d",m);
}
