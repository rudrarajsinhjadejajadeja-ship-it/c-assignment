#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();
	printf("enter number :");
	scanf("%d",&num);
	printf("table of number %d\n",num);

	for (i=1;i<=10;i++)
		printf("%d %d  =%d\n",num,i,num*i);
	getch();
}
