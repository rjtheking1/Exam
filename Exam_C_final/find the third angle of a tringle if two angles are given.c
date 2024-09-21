#include<stdio.h>
#include<conio.h>

void main()
{
	// wap find the third angle of a tringle if two angles are given.
	
	int angle_A,angle_B,angle_C;
	
	printf("Enter angleA = ");
	scanf("%d",&angle_A);
	
	printf("Enter angleB = ");
	scanf("%d",&angle_B);
	
	angle_C= 180 - (angle_A + angle_B);
	printf("angleC=%d",angle_C);
}
