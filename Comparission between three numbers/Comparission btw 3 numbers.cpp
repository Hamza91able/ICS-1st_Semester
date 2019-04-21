//Comparission between 3 numbers.
#include<conio.h>
#include<stdio.h>
int main()
{
	float n1,n2,n3;
	printf("Enter number1");
	scanf("%f",&n1);
	printf("Enter nubmer2");
	scanf("%f",&n2);
	printf("Enter number3");
	scanf("%f",&n3);
	if (n1>n2 && n1<n3)
	{
		printf("NUmber1 is greater");
	}
	else if (n2>n1 && n2>n3)
	{
		printf("Number2 is greater");
	}
	else if (n3>n1 && n3>n2);
	{
		printf("Number 3 is greater");
	}
	getch();
	return 0;
}

