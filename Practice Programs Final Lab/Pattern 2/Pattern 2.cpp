//Pattern Program
#include <conio.h>
#include <stdio.h>
int main()
{
	int a,b;
	printf ("1");
	for (a=4;a>1;a--)
	{
		for (b=1;b<a;b++)
		{
			printf ("%d",a);
		}
		printf ("1\n1");
	}
	getch();
	return 0;
}
