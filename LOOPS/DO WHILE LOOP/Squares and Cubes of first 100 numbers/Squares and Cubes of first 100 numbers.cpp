//Squares and Cubes of first 100 numbers.
#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0,Cube,Square,num;
	printf ("\nThe squares and cubes of first 100 positive integers are:-");
	do
	 {
	 	Square = i*i;
	 	Cube = i*i*i;
	 	printf ("\nSquare and Cube of %d",i);
	 	printf (" = %d and %d",Square,Cube);
	 	i++;
 	 }
 	while (i<=100);
 	getch ();
	return 0;
}
