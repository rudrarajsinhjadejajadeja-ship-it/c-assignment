#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2;
	clrscr();
	printf("input two numbers:");
	scanf("%d %d", &num1, &num2);
	if (num1>num2)
     {
	printf("number 1 is greater than number 2");
     }
     else
	printf("number 2 is greater than number 1");
	getch();
}