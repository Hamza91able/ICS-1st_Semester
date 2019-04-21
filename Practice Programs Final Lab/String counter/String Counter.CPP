//Count different charachters in a string.
#include <conio.h>
#include <stdio.h>
#include <string.h>

main()
{
	//clrscr();
	int i,vovels=0,consonants=0,digits=0,space=0;
	char str[1000];
	printf ("Enter a string: ");
	gets(str);
	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U')
		{
			vovels++;
		}
		else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			consonants++;
		}
		else if (str[i]>='0' && str[i]<='9')
		{
			digits++;
		}
		else if (str[i]== ' ')
		{
			space++;
		}
	}

	printf ("\nVowels: %d", vovels);
	printf ("\nConsonants: %d", consonants);
	printf ("\nDigits: %d", digits);
	printf ("\nWhite spaces: %d", space);

	getch();
}
