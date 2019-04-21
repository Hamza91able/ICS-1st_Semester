//Number shape 5
#include <conio.h>
#include <stdio.h>
int main()
{
	int i,j,k;
	for (i=1;i<=4;i++)
	{
		for (j=4;j>=i;j--)
		{
			printf (" ");
		}
		for (k=i;k>=1;k--)
		{
			printf ("%d", k);
		}
	printf ("\n");
	}
	getch();
	return 0;
}
