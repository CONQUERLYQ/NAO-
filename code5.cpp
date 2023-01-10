#include<stdio.h>
#include<math.h>
int main()
{
	char a[7],b[7];
	int i,temp,number=0;
	for(i=0;i<7;i++)
	{
	  scanf("%c",&a[i]);
	  b[i]=a[i];
	}
	for(i=0;i<5;i++)
	a[i+2]=b[i];
	a[0]=b[5];
	a[1]=b[6];
	for(i=0;i<7;i++)
	{
		if(a[i]<='0'+4)
		{
		  temp=a[i]-'0'+11;
		  a[i]='A'+temp-10;
		}
		else
		{
			if(a[i]<='0'+9)
			{
				temp=a[i]-'0'-5;
				a[i]='0'+temp;
			}
			else
			{
				temp=a[i]-55-5;
				if(temp>9)
			     a[i]='A'+temp-10;
			    else
			     a[i]='0'+temp;	
			}
		}
	}
	for(i=6;i>=0;i--)
	{
	    double m=pow(16,6-i);
		if(a[i]<'0'+10)
		temp=a[i]-'0';
		else
		temp=a[i]-55;
		number=number+temp*m;
	}
	int year,month,day;
	day=number%100;
	year=number/10000;
	month=number/100-year*100;
	printf("%dÄê%dÔÂ%dÈÕ",year,month,day);
	return 0;
}
