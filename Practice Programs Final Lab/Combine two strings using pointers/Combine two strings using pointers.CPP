//String concatenation using pointers.
#include <conio.h>
#include <stdio.h>
void combine_string(char*,char*);
main()
{
	//clrscr();
	char original[1000],add[1000];
	printf ("Enter source string: \n");
	gets(original);
	printf ("Enter string to concatenate: \n");
	gets(add);
	combine_string(original, add);
	printf ("String after concatenation is: %s \n",original);
	getch();
}
void combine_string(char *original, char *add)
{
	while (*original)
		original++;

	while (*add)
	{
		*original = *add;
		add++;
		original++;
	}
	*original = '\0';
}
