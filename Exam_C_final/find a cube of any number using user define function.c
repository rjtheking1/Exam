#include<stdio.h>
#include<conio.h>

int cube(int n)
{
	//Write a Program to find the cube of a given number.
	
	return n*n*n;

}

int main()
{
	int x;
	
	printf("Enter your Number : ");
	scanf("%d",&x);
	
	printf("%d",cube(x));

	return 0;
}
