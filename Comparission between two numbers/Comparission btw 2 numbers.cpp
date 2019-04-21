//Comparission between two numbers.
#include<conio.h>
#include<stdio.h>
int main()
{
	float n1,n2;
	printf("Enter number 1..");
	scanf("%f",&n1);
	printf("Enter numver 2..");
	scanf("%f",&n2);
	if (n1>n2)
	{
		printf("number1 is greater then number2");
	}
	else if (n1<n2)
	{
		printf("number2 is greater then number2");
	}
	else if (n1==n2)
	{
		printf("both numbers are equal");
	}
	getch();
	return 0;
}

