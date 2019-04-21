//Lenght of a string.
#include <conio.h>
#include <stdio.h>
int main()
{
	char s[100];
	int i,count=0;
	printf ("Enter a string: ");
	gets(s);
	for (i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf ("Length is: %d",count);
	getch();
	return 0;
}
