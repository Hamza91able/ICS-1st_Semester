//Area of sqaure using do while loop
#include<conio.h>
#include<stdio.h>
int main()
{
	int i=0;
	float l,A;
	do
	 {
	 	printf ("\nEnter value of length=");
	 	scanf ("%f",&l);
	 	A=l*l;
	 	printf ("\nArea of square is %f", A);
	 	i++;
	 }
	while (i<10);
	getch();
	return 0; 
}
