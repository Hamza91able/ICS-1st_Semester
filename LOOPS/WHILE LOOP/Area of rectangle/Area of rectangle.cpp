//Area of rectanlge using while loop.
#include <conio.h>
#include <stdio.h>

int main ()
{
	float l,b,A;
	int i=0;
	while (i<5)
	{
		printf ("\nEnter length:-");
		scanf ("%f",&l);
		printf ("\nEnter breadth:-");
		scanf ("%f",&b);
		if (l>0 && b>0)
		{		
			A = l * b;
			printf ("\nArea of rectangle is %f", A);
		}
		else
		{
			printf ("Invalid Input");
		}
		i++;
	}
	getch();
	return 0;
}
