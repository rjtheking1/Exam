#include<stdio.h>

void main()
{
	//wap to swap two variables(without using third variable)
	
	int x,y;
	
	printf("Enter the number one =");
	scanf("%d",&x);
	
	printf("Enter the number y =");
	scanf("%d",&y);
	
	x= x+y;
	y= x-y;
	x= x-y;
	
	printf("x=%d and y=%d",x,y);
	
}
