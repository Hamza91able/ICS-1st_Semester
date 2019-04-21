//Calculator
#include <conio.h>
#include <stdio.h>

void Add(float,float);
void Sub(float,float);
void Mul(float,float);
void Div(float,float);

int main()
{
	float f1,f2;
	char OP,Choice;
	printf ("Two Number Calculator\n");
	do
	{
		printf ("\nEnter First Number:");
		scanf ("%f",&f1);
		printf ("Enter Second Number:");
		scanf ("%f",&f2);
		printf ("Enter Operator:");
		OP=getch();
		switch(OP)
		{
			case'+':
				printf ("+");
				Add(f1,f2);
				break;
			case '-':
				printf ("-");
				Sub(f1,f2);
				break;
			case '*':
				printf ("*");
				Mul(f1,f2);
				break;
			case '/':
				printf ("/");
				Div(f1,f2);
				break;
			default:
				printf ("Invalid Operator\n");
		}
		printf ("\nDo you want to continue? Y/N:");
		Choice=getch();
	}
	while (Choice== 'Y' || Choice== 'y');
}

void Add(float f1,float f2)
{
	printf ("\nAddition of two numbers is %f",f1+f2);
}

void Sub(float f1,float f2)
{
	printf ("\nSubtraction of two numbers is %f",f1-f2);
}

void Mul(float f1,float f2)
{
	printf ("\nMultiplication of two numbers is %f",f1*f2);
}

void Div(float f1,float f2)
{
	if (f2!=0)
	{
		printf ("\nDivision of two numbers is",f1/f2);
	}
	else
	{
		printf ("\nDivision not possible by 0");
	}
}
