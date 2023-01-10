#include<stdio.h>
int main()
{
   int number,count=0,i=0;
   scanf("%d",&number);
   char a[number];
   while(number!=1)
   {
   	  if(number%2==0)
   	  {
   	  	 number=number/2;
   	     a[i]='^';
   	     i++;
   	     count++;
	  }
   	 else
   	 {
   	   if((number+1)%4==0&&number>3)
   	   {
   	   	  number=number+1;
		  a[i]='+';
		  i++;
		  count++;	
	   }
	   if((number-1)%4==0||number==3)
	   {
	   	number=number-1;
	   	a[i]='-';
	   	i++;
	   	count++;
	   }
	 }
   }
   printf("%d\n",count);
   for(i=0;i<count;i++)
   printf("%c",a[i]);	
}
