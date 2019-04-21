//String reverse without string function.
#include <conio.h>
#include <stdio.h>
#include <string.h>

main()
{
	//clrscr();
	char str[1000], temp;
	int i,j=0;
	printf ("Enter string: ");
	gets(str);
	i=0;
	j=strlen(str)-1;
	while (i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf ("\nReverse string is: %s",str);
	getch();
}
