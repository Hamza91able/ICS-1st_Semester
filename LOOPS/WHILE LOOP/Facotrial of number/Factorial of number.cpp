//Factorial of number using while loop.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i=1,n;
	long f = 1;
	printf ("\nEnter number to calculate factorial:");
	scanf ("%d",&n);
	if (n<0)
	printf ("Factorial of negative number doesn't exist");
	else
	{
		while (i<=n)
		{
			f = f*i;
			i++;
		}
		printf ("Factorial of %d = %ld", n, f);		
	}
	getch();
	return 0;
}
