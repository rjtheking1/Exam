#include<stdio.h>

void main()
{
	// wap in c to make such a pattern using user define function...
	
	//5 4 3 2 1
	//4 3 2 1
	//3 2 1 
	//2 1
	//1
	
	int i,j;
	
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
