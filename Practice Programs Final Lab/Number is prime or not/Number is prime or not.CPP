//Program to check if number is prime or not.
#include <conio.h>
#include <stdio.h>
int main()
{
	//clrscr();
	int n,i,pc=0;
	printf ("\nEnter a number to check");
	scanf ("%d",&n);
	for (i=2;i<=n/2;i++)
	{
		if (n%i==0)
		{
			pc=1;
			break;
		}
	}

	if (pc==0)
	{
		printf ("\n%d is prime",n);
	}
	else
	{
		printf ("\n%d is not prime",n);
	}
	getch();
}
