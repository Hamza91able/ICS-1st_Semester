//Program to sort strings in dictionary order
#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char str[5][20],s[20];
	int i,round,r;
	printf ("Enter 5 strings: ");
	for (i=0;i<5;i++)
		gets(str[i]);
	
	for (round=1;round<=5;round++)
	{
		for (i=0;i<=5;i++)
		{
			r=strcmp(str[i],str[i+1]);
			if (r>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],s);
			}
		}
	}
	printf ("\nStrings in dictionary order\n");
	for (i=0;i<=5;i++)
		puts(str[i]);
	
	getch();
	return 0;
}
