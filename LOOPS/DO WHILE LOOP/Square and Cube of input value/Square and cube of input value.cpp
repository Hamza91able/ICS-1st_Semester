//Square and Cube of a number using do while loop.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i=0;
	float num,cube,square;
	do
	 {
	 	printf ("\nEnter number=");
	 	scanf ("%f", &num);
	 	square = num*num;
	 	cube = num*num*num;
	 	printf ("\nSquare is %f", square);
	 	printf ("\nCube is %f", cube);
	 	i++;
	 }
	 while (i<10);
	getch ();
	return 0;	 
}
