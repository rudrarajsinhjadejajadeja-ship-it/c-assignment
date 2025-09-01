x#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("input two numbers:");
	scanf("%d%d",&x,&y);
	(x>y)?
		printf("\n%d is greater than %d",x,y)
	:(x<y)?
		printf("\n%d is less than %d",x,y)
	:
		printf("\n%d is equal to %d",x,y);
	getch();
}
