//number shape 3
#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,k;
	for (i=5;i>=1;i--)
	{
		for (j=i;j<6;j++)
		{
			printf (" ");
		}
		for (k=1;k<2*(i-1);k++)
		{
			printf ("%d", k);
		}
		printf ("\n");
	}
	getch ();
	return 0;
}
