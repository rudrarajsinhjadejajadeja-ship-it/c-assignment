#include<stdio.h>
#include<conio.h>
void main()

{
	float p,r,n,si;
	clrscr();
	printf("enter your amount :");
	scanf("%f",&p);
	printf("enter rate :");
	scanf("%f",&r);
	printf("enter year :");
	scanf("%f",&n);
	si=(p*r*n)/100;
	printf("rate of interest: %.2f",si);
	getch();

}














