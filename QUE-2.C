#include<stdio.h>
#include<conio.h>
int main()
{   int bs,hra,da,ta;
	float temp1,temp2,gs;
	clrscr();
	printf("\n please enter your Base Salary : ");
	scanf("%d", &bs);
	printf("\n please enter HRA : ");
	scanf("%d", &hra);
	printf("\n please enter DA : ");
	scanf("%d", &da);
	printf("\n please enter TA : ");
	scanf("%d", &ta);
	temp1 = hra + da + ta;
	temp2 = (bs * temp1) / 100;
	gs = bs + temp2;
	printf("\n your gross salary is : %.2f",gs);
	printf("\n -------------------------------------------");
	printf("\n Thank you");

	getch();
	return 0;
}