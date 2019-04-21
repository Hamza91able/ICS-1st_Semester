//Number shape 2
#include <conio.h>
#include <stdio.h>
int main()
{
	int i,j,k;
	for (i=1;i<=6;i++)
	{
		for (j=i;j<6;j++)
		{
			printf (" ");
		}
		for (k=1;k<i;k++)
		{
			printf ("%d", k);
		}
		printf ("\n");
	}
	getch();
	return 0;
}
