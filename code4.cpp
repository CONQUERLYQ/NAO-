#include<stdio.h>
int MIN(int m,int n)
{
	int min=m;
	if(m>n)
	min=n;
	return min;
}
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int min,max,t;
	for(t=m;t<n;t++)
	{
		min=0;
		for(i=1;i<m;i++)
	 {
		if(arr[min]>arr[i])
		min=i;
	 }
	arr[min]=arr[min]+arr[t];
	}
	max=0;
	for(i=0;i<MIN(m,n);i++)
	{
		if(arr[max]<arr[i])
		max=i;
	}
	printf("%d",arr[max]);
}
