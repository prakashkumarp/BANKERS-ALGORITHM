#include<stdio.h>

int main()
{
int q,p,maxi,fl=0;
int i=0,j,flag[20],n=0,k=0;
int sum=0;
int avl=0;
int ui[20];
int max[20];
int alloc[20];
int need[20];
printf("enter  no of processes:"); //processes
scanf("%d",&q);
printf("enter  no of resources:");//resources
scanf("%d",&p);
maxi=p+q;

for(i=0;i<q;i++)
{

if(i==0)
{
max[i]=p-1;
}
else
{
max[i]=1;
}
}

//allocation of  resources to processes
for(i=0;i<q;i++)
{
if(i==0)
{
alloc[i]=p-2; // bankers algorithm to avoid the deadlock
}
else
{alloc[i]=0;}
}

for(i=0;i<q;i++)
{
sum=alloc[i]+sum;
}
avl=q-sum;

for(i=0;i<q;i++)
{
need[i]=max[i]-alloc[i];
}

while(n<=q)
{
for(i=0;i<q;i++)
{
if(need[i]<avl)
{
avl=avl+need[i];
flag[i]=1;
n=n+1;
}

else
{flag[i]=0;}
}
for(i=0;i<q;i++)
{
if(flag[i]==1)
fl=fl+1;
}
if(fl==0)
{
n=q+1;
k=1;
}
}

if(k==1){printf("Deadlock occured");
}

else
{
	printf("Safe State");// safe state
}
}
