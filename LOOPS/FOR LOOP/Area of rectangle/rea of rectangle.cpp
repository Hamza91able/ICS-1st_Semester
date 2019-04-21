//Area of rectanlge using for loop.
#include <conio.h>
#include <stdio.h>

int main ()
{
	float l,b,A;
	int i;
	for (i=0;i<5;i++)
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
	}
	getch();
	return 0;
}
