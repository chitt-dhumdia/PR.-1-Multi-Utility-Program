#include<stdio.h>
#include<conio.h>

int main()
{
	int fa,sa,ta;
	clrscr();
	printf("\n please enter first angle of triangle : ");
	scanf("%d", &fa);
	printf("\n please enter second angle of triangle : ");
	scanf("%d", &sa);
	ta = 180 - fa - sa;
	printf("\n third angle of triangle is : %d",ta);
	printf("\n -------------------------------------------------");
	printf("\n Thank you");
	getch();
	return 0;
}