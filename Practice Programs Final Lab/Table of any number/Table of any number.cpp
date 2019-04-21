//Table of numbers.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i,n;
	printf ("Enter number to calculate table: ");
	scanf ("%d",&n);
	for (i=1;i<=10;i++)
	{
		printf ("\n%d * %d = %d",n,i,n*i);
	}
	getch();
	return 0;
}
