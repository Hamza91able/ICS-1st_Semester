//Printing small a to z using for loop.
#include <stdio.h>
#include <conio.h>
int main()
{
	printf ("\nAlphabets are:-");
	char i;
	for (i = 'a';i <= 'z';i++)
	 {
	 	printf ("%c ",i);
	 }
	getch();
	return 0; 
}
