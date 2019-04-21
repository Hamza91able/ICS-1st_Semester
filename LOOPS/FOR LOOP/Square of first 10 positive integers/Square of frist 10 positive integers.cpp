//Square of first 10 positive numbers using for loop.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i,square,num;
	printf ("\nThe square of first 10 positive integers are:-");
	for (i=0;i<=10;i++)
	 {	
		square = i*i;
		printf ("\nSquare of %d" ,i);
		printf (" = %d", square);
	 }
	getch ();
	return 0; 
}
