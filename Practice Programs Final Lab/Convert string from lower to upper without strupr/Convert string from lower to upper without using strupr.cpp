//String convert lower to upper without using strupr.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i;
	char c[50];
	printf ("Ennter a string: ");
	gets(c);
	for (i=0;c[i];i++)
	{
		if (c[i]>='a' && c[i]<='z')
			c[i]=c[i]-32;
	}
	printf ("String in upper case is: %s",c);
	getch();
	return 0;		
}
