#include <stdio.h>
int main()
{
int array[100],n,i,j,temp,flag=0;
printf("Enter number of elements");
scanf("%d", &n);
printf("Enter %d Numbers: ",n);
for(i=0;i<n;i++)
scanf("%d", &array[i]);
for(i=0 ;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(array[j]>array[j+1])
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
flag=1;
}
if(!flag)
{
break;
}
}
}
printf("Sorted Array:");
for(i = 0; i < n; i++)
printf("%d\n", array[i]);
return 0;
}
