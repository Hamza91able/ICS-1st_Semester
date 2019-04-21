//Square and Cube of a number using for while loop.
#include <conio.h>
#include <stdio.h>
int main()
{
	int i=0;
	float Square,Cube,num;
	while (i<10)
	 {
	 	printf ("\nEnter number=");
	 	scanf ("%f", &num);
	 	Square = num*num;
	 	Cube = num*num*num;
	 	printf ("\nSquare and Cube is %f and %f",Square,Cube);
	 	i++;
	 }
	getch();
	return 0; 
}
