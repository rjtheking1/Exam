#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to find minimum from a given 3 number using nested if else.
	int a,b,c;
	
	printf("Enter The Value Of a :");
	scanf("%d",&a);
	
	printf("Enter The Value Of b :");
	scanf("%d",&b);
	
	printf("Enter The Value Of c :");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("a is minimum");
		}
		else
		{
			printf("b is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
}
