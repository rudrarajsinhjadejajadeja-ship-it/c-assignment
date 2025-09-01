#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float pi=3.14,ac;
	clrscr();
	printf("enter randious :");
	scanf("%d",&r);
	ac=pi*r*r;
	printf("area of circle %.2f",ac);
	getch();
}