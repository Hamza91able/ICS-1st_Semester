//Sum of first n natural numbers
#include <conio.h>
#include <stdio.h>
int main()
{	
	int n,s=0,i;
	printf ("Enter number of terms: ");
	scanf ("%d",&n);
	for (i=0;i<=n;i++)
		s=s+i;
	
	printf ("Sum is: %d",s);
	getch();
	return 0;
}
