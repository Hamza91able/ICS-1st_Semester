//Factorial of number using for loop.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i,n;
	long factorial = 1;
	printf ("\nEnter number to calculate factorial:");
	scanf ("%d",&n);
	if (n<0)
	printf ("Factorial of negative number doesn't exist");
	else
	{
		for (i=1;i<=n;i++)
		{
			factorial = factorial*i;
		}
		printf ("Factorial of %d = %ld", n, factorial);		
	}
	getch();
	return 0;
}
