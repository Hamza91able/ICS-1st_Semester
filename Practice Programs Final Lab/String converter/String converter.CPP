//Convert string from upper to lower and vice versa.
#include <conio.h>
#include <stdio.h>
#include <string.h>
void uppercase(char [1000]);
void lowercase(char [1000]);

main()
{
	//clrscr();
	char string[1000];
	char op,choice;
	do
	{
	
		printf ("Use numbers to navigate the menu");
		printf ("\n1.Lower to Upper");
		printf ("\n2.Upper to Lower");
		printf ("\n3.Exit\n");
		op=getch();
		switch(op)
		{
			case '1':
			printf ("1\n");
			uppercase(string);
			break;

			case '2':
			printf ("2\n");
			lowercase(string);
			break;

			case '3':
			printf ("3\n");
			getch();
			break;

			default:
			printf ("\nInvalid Selection");
		}
		printf ("\n\n\nDo you want to continue? Y/N\n");
		choice=getch();
	}
	while (choice=='y' || choice=='Y');
}

void uppercase(char string[1000])
{
	printf ("\nInput string to convert into upper case: ");
	gets(string);
	printf ("\nInput string in upper case: %s",strupr(string));
}

void lowercase(char string[1000])
{
	printf ("\nInput string to convert into lower case: ");
	gets(string);
	printf ("\nInput string in lower case: %s",strlwr(string));
}
