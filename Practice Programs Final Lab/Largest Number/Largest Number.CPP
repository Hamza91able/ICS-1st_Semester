//Largest number in an series.
#include <conio.h>
#include <stdio.h>
int main()
{
	//clrscr();
	int i,num,x,large=0;
	printf ("How many numbers: ");
	scanf ("%d",&x);
	for (i=0; i<x;i++)
	{
		printf ("\nEnter numnber %d: ",i+1);
		scanf ("%d",&num);
		if (num>large)
		large=num;
	}
	printf ("\nThe Largest Number is %d",large);
	getch();
}
