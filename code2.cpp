#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m=rand()%5+3;
	int n=rand()%5+3;
	int arr[m][n],b[m][n],i,j,temp,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		arr[i][j]=rand()%9+1;
	}
	printf("%d %d",m,n);
	printf("\n");
	printf("原矩阵为:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
	if(m<=n)
	k=m;
	else
	k=n;
	if(k%2==0)
	{
		for(i=0;i<k/2;i++)
		{
			if(i==0)
			{
				for(j=i;j<n-i-1;j++)
			  {
				temp=arr[i][j];
				b[i][j+1]=temp;
			  }
			}
			else
			{
				for(j=i-1;j<n-i-1;j++)
				{
					temp=arr[i][j];
				    b[i][j+1]=temp;
				}
			}
			if(i==m-i-1)
			b[0][0]=arr[i][j];
			for(j=i;j<m-i-1;j++)
			{
				temp=arr[j][n-i-1];
				b[j+1][n-i-1]=temp;
			}
			if(n-i-1==i)
			b[0][0]=arr[j][n-i-1];
			for(j=n-i-1;j>i;j--)
			{
				temp=arr[m-i-1][j];
				b[m-i-1][j-1]=temp;
			}
			if(m-i-1==i+1)
			b[0][0]=arr[m-i-1][j];
			for(j=m-i-1;j>i+1;j--)
			{
				temp=arr[j][i];
				b[j-1][i]=temp;
			}
		}
	}
	else
	{
		for(i=0;i<k/2+1;i++)
		{
			if(i==0)
			{
				for(j=i;j<n-i-1;j++)
			  {
				temp=arr[i][j];
				b[i][j+1]=temp;
			  }
			}
			else
			{
				for(j=i-1;j<n-i-1;j++)
				{
					temp=arr[i][j];
				    b[i][j+1]=temp;
				}
			}
			if(i==m-i-1)
			b[0][0]=arr[i][j];
			for(j=i;j<m-i-1;j++)
			{
				temp=arr[j][n-i-1];
				b[j+1][n-i-1]=temp;
			}
			if(n-i-1==i)
			b[0][0]=arr[j][n-i-1];
			for(j=n-i-1;j>i;j--)
			{
				temp=arr[m-i-1][j];
				b[m-i-1][j]=temp;
			}
			if(m-i-1==i+1)
			b[0][0]=arr[m-i-1][j-1];
			for(j=m-i-1;j>i+1;j--)
			{
				temp=arr[j][i];
				b[j-1][i]=temp;
			}
		}
	}
	printf("移动后矩阵为:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
}
