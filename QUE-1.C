#include<stdio.h>
#include<conio.h>
int main()
{
	float f,c;
	clrscr();
	printf("\n please enter temperature in celsius : ");
	scanf("%f", &c);
	f = (1.8 * c) + 32;
	printf("\n The temperature in Fahrenheit is : %.2f",f);
	printf("\n -------------------------------------------------");
	printf("\n Thank you");
	getch();
	return 0;
}