#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int i,j,m,n,e,temp,min,k=401;
	int sum,num1,num2,num3,num4;
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			for(m=0;m<=100;m++)
			{
				for(n=0;n<=100;n++)
				{
					if(i+j/3+m/3+n/2>=a&&j+i/3+m/3+n/2>=b&&m+i/3+j/3+n/2>=c&&n+i/2+j/2+m/2>=d)
					{
						sum=i+j+m+n;
						if(sum<k)
						{
							num1=i;
						    num2=j;
						    num3=m;
						    num4=n;
						    k=i+j+m+n;
						}	
					}
				}
			}
		}
	}
	printf("%d\n",k);
	printf("%d %d %d %d",num1,num2,num3,num4);
} 
