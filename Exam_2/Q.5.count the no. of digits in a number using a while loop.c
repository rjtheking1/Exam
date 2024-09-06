#include<stdio.h>

void main()
{
	//wap to count the no. of digits in a number using a while loop
	
	int i=1,n;
	
	printf("Enter your number =");
	scanf("%d",&n);
	
	while(n>10)
	{
		n=n/10;
		i++;
	}
	printf("The Number your entered is %d digit number!",i);
}
	
	







