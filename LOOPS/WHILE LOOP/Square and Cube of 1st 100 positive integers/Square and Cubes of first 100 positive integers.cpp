//Squares and Cubes of first 100 positive integers
#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0,Cube,Square,num;
	printf ("\nThe squares and cubes of first 100 positive integers are:-");
	while (i<=100)
	 {
	 	Square = i*i;
	 	Cube = i*i*i;
	 	printf ("\nSquare and Cube of %d",i);
	 	printf (" = %d and %d",Square,Cube);
	 	i++;
 	 }
 	getch ();
	return 0;
}
