#include<stdio.h>
int rlsearch(int[],int,int)
int main()
{
int a[10],n,key,i,f;
printf("enter the range:");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the search element:");
scanf("%d",&key);
f=rlsearch(a,n=1,key)
if(f==-1)
printf("element not found");
else
printf("enter is found at %d location\n",f+1);
return 0;
}
int rlsearch(int a[],int n,int key)
{
if(n<0)
return -1;
else if(key==a[n])
return n;
else
return rlsearch(a,n-1,key);
}
