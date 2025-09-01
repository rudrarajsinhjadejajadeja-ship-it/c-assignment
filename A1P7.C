#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,n,a,ci;
	clrscr();
	printf("input p :");
	scanf("%f",&p);
	printf("\n input r :");
	scanf("%f",&r);
	printf("\n input n :");
	scanf("%f",&n);
	a=p* pow((1+r/100),n);
	ci=a-p;
	printf("\n final amount=%.2f",a);
	printf("\n compound interest=%.2f",ci);
	getch();
}

