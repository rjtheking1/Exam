#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	
	printf("Enter N :");
	scanf("%d",&n);
	
	
	while(n>10)
	{
		n=n/10;
		i++;
	}
	printf("The Number You Entered is %d Digit Number!!",i);
}
