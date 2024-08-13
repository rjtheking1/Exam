#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=0,sum=0;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	if(n>0)
	{
		do
		{
			i++;
			if(i%2==1)
			{
				printf("%d ",i);
				sum=sum+i;
			}
	
		}while(i<n);
	
		printf("Sum of all odd numbers from 1 to %d is %d",n,sum);
	}
	else
	{
		printf("Enter valid number");
	}
}