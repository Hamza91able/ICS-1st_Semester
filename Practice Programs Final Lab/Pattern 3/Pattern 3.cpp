//Pattern 3.
#include <conio.h>
#include <stdio.h>
int main()
{
	int coef=1,space,i,j;
	for (i=0;i<6;i++)
	{
		for (space=1;space<=6-i;space++)
			printf ("  ");
			
		for (j=0;j<=i;j++)
		{
			if (j==0 || i==0)
				coef=1;
			else
			coef=coef*(i-j+1)/j;
			
			printf ("%4d", coef);
		}
		printf ("\n");
	}
	getch();
	return 0;
}
