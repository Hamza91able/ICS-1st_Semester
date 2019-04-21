//Volume of sphere using for loop
#include <stdio.h>
#include <conio.h>
int main()
{
	int i;
	float V,r,PI;
	PI = 3.14;
	for (i=0;    ;i++)
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
	 }
}
