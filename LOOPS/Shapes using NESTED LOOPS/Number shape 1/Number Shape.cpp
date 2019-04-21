//Number Shape 1
#include <conio.h>
#include <stdio.h>
int main()
{
	int i,j,k;
	for (i=5;i>=1;i--)
	{
		for (j=i;j<5;j++)
		{
			printf (" ");
		}
		for (k=1;k<i;k++)
		{
			printf ("%d", k);
		}
		printf ("\n");
	}
	getch ();
	return 0;
}
