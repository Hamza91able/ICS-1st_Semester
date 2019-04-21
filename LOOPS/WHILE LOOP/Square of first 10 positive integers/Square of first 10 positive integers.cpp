//Square of first 10 positive integers
#include <conio.h>
#include <stdio.h>
int main()
{
	int i=1,square,num;
	printf ("\nThe square of first 10 positive integers are:-");
	while (i<=10)
	 {	
		square = i*i;
		printf ("\nSquare of %d" ,i);
		printf (" = %d", square);
		i++;
	 }
	getch ();
	return 0; 
}
