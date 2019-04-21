//5 Numbers input and tell if even or odd using for loop.
#include <conio.h>
#include <stdio.h>
int main ()
{
	int i,n;
	for (i<=0;i<5;i++)
	{
		printf ("\nEnter number");
		scanf ("%d",&n);
    	if(n % 2 == 0)
        printf("%d is even.", n);
    	else
        printf("%d is odd.", n);
	}
	getch ();
	return 0;
}
