#include<stdio.h>
#include<conio.h>
void lsearch(int[],int,int);
int main()
{
int a[10],n,key,i;
printf("enter the range:");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter search element:");
scanf("%d",&key);
lsearch(a,n,key);
}
void lsearch(int a[],int n,int key)
{
int i,f=0;
for(i=0;i<n;i++)
if(key==a[i])
{
f=1;
break;
}
if(f==0)
printf("element is not found");
else
printf("element is found at %d location \n",i+1);
}
