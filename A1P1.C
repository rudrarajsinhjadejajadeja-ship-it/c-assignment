#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,choice;
	clrscr();
	printf("\nenter one number:");
	scanf("%d",&x);
	printf("\nenter second number:");
	scanf("%d",&y);
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n enter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Addition=%d",x+y);
			break;
		case 2:
			printf("Substraction=%d",x-y);
			break;
		case 3:
			printf("Multiplication=%d",x*y);
			break;
		default:
			printf("Division=%.2f",x/y);
			break;
	}
	getch();
}