//Input a number and give its square and cube as a output.
#include<conio.h>
#include<stdio.h>
int main()
{
	float number,square,cube;
	printf("Enter a number to square and cube....");
	scanf("%f",&number);
	square=number*number;
	cube=number*number*number;
	printf("The square and cube of the given number is %f and %f",square,cube);
	//printf("The cube of the given number is %f",cube);
	getch();
	return 0;
}
