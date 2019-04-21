//Square and cube of first 100 integers using for loop.
#include <stdio.h>
#include <conio.h>
int main()
{
	int i,Cube,Square,num;
	printf ("\nThe squares and cubes of first 100 positive integers are:-");
	for (i=0;i<=100;i++)
	 {
	 	Square = i*i;
	 	Cube = i*i*i;
	 	printf ("\nSquare and Cube of %d",i);
	 	printf (" = %d and %d",Square,Cube);
 	 }
 	getch ();
	return 0;
}
