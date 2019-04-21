//Area of sqaure using for loop
#include<conio.h>
#include<stdio.h>
int main()
{
	int i;
	float l,A;
	for (i=0;i<=10;i++)
	 {
	 	printf ("\nEnter value of length=");
	 	scanf ("%f",&l);
	 	A=l*l;
	 	printf ("\nArea of square is %f", A);
	 }
	getch();
	return 0; 
}
