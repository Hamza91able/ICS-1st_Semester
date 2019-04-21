//Area of square using while loop.
#include<conio.h>
#include<stdio.h>
int main()
{
	int i=0;
	float A,l;
	while (i<10)
	 {
	 	printf ("\nEnter value of length=");
	 	scanf ("%f", &l);
	 	A=l*l;
	 	printf ("Area is %f", A);
	 	i++;
	 }
	getch ();
	return 0;
}
