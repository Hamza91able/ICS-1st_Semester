//determine if number is even or odd
#include<conio.h>
#include<stdio.h>
int main()
{
	int num;
	printf ("Enter a number");
	scanf("%d",&num);
	if (num % 2 == 0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
	getch();
	return 0;
}
