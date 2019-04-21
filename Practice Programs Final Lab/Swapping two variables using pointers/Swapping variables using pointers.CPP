//Swaping two variables using pointers.
#include <conio.h>
#include <stdio.h>
void swap(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
main()
{
	//clrscr();
	int num1,num2;
	printf ("\nEnter the first number: ");
	scanf ("%d",&num1);
	printf ("\nEnter the second number: ");
	scanf ("%d",&num2);
	swap (&num1,&num2);
	printf ("\nAfter Swapping\n");
	printf ("\nFirst number: %d", num1);
	printf ("\nSecond number: %d", num2);
	getch();
}
