//5 Numbers input and tell if even or odd using do while loop.
#include <conio.h>
#include <stdio.h>
int main ()
{
	int i=0,n;
	do
	{
		printf ("\nEnter number");
		scanf ("%d",&n);
    	if(n % 2 == 0)
        printf("%d is even.", n);
    	else
        printf("%d is odd.", n);
        i++;
	}
	while (i<5);
	getch ();
	return 0;
}
