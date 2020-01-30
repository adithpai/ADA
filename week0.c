#include<stdio.h>
#include<stdlib.h>
int no_cases,N,arr[69];
void main()
{  int count=0;
  printf("Enter no of test cases");
  scanf("%d",&no_cases);
  do
  {
   printf("Enter the no of elements");
   scanf("%d",&N);
   printf("Enter the elements");
   for(int i=0;i<N;i++)
   scanf("%d",&arr[i]);
int k;
 printf("Enter the search key");
  scanf("%d",&k);
 int mid,beg=0,end=N-1;
 if(beg<end)
 {
 mid=N/2;
 if(k==arr[mid])
 printf("1");
 else if(k>mid)
 beg=mid+1;
else
 end=mid-1;
 }else
printf("0");

   count++;
   }while(count<no_cases);
}

 
  
