//Fibonacci Series using do while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
	int num,i=0,t1 = 0,t2 = 1, nextTerm;
	printf ("\nEnter the number of terms:");
	scanf ("%d",&num);
	printf ("\nFirst %d terms of Fibonacci series are:-",num);
	do
	 {
	 	if (i<=1)
	 	 {
	 	 	nextTerm = i;
		 }
		else
		 {
		 	nextTerm = t1 + t2;
			t1 = t2;
		 	t2 = nextTerm;
		 }
		printf ("\n%d",nextTerm); 
		i++;
	 }
	 while (i<num);
	getch();
	return 0; 
}
