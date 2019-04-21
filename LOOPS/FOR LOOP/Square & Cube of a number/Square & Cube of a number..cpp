//Square and Cube of a number using for loop
#include <conio.h>
#include <stdio.h>
int main()
{
	int i;
	float num,cube,square;
	for (i=0;i<=10;i++)
	 {
	 	printf ("\nEnter number=");
	 	scanf ("%f", &num);
	 	square = num*num;
	 	cube = num*num*num;
	 	printf ("\nSquare is %f", square);
	 	printf ("\nCube is %f", cube);
	 }
	getch ();
	return 0;	 
}


