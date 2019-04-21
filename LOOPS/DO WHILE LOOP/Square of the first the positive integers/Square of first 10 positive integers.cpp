//Sqaure of first 10 positive integers using do while.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i=0,square,num;
	printf ("\nThe square of first 10 positive integers are:-");
	do
	 {	
		square = i*i;
		printf ("\nSquare of %d" ,i);
		printf (" = %d", square);
		i++;
	 }
	while (i<=10); 
	getch ();
	return 0; 
}
