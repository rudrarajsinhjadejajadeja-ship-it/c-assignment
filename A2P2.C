#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3;
	clrscr();
	printf("input num1:");
	scanf("%d",&num1);
	printf("input num2:");
	scanf("%d",&num2);
	printf("input num3:");
	scanf("%d",&num3);
	if(num1>num2)
	{
		if(num1>num3)
			printf("number 1 is gratest");
		else
			printf("number 3 is greatest");
	}
	else
	{
		if(num2>num3)
			printf("number 2 is greatest");
		else
			printf("number 3 is greatest");
	}
	getch();
}



