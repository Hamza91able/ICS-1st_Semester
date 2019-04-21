//Volume of a sphere using while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0;
	float V,r,PI;
	PI = 3.14;
	while(1)
	 {
	 	printf ("\nEnter value of radius=");
	 	scanf ("%f",&r);
	 	if (r>0)
	 	 {
	 	 	V=(4/3)*PI*r*r;
	 	 	printf ("\nVolume is %f", V);
		 }
		else
		 {
		 	printf ("\nInvalid radius input");
		 	getch ();
		 	return 0;
		 }
		i++;  
	 }
}
