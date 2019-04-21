//factorial of a number using do while loop
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
		do
		{
			f = f*i;
			i++;
		}
		while (i<=n);
		printf ("Factorial of %d = %ld", n, f);
	}
	getch();
	return 0;
}
