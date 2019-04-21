//Printing small a to z using while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
	printf ("\nAlphabets are:-");
	char i= 'a';
	while (i<='z')
	 {
	 	printf ("%c ",i);
	 	i++;
	 }
	getch();
	return 0; 
}
