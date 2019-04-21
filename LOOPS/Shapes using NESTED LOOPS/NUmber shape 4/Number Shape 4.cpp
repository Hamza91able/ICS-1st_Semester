//Number Shape 4
#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		for (j=i;j<5;j++)
		{
			printf (" ");
		}
		for (k=i;k>=1;k--)
		{
			printf ("%d", k);
		}
	printf ("\n");	
	}
	getch ();
	return 0;
}
