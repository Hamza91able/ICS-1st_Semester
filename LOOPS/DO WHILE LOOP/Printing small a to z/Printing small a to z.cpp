//Printing small a to z using do while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
	printf ("\nAlphabets are:-");
	char i= 'a';
	do
	 {
	 	printf ("%c ",i);
	 	i++;
	 }
	 while (i<='z');
	getch();
	return 0; 
}
