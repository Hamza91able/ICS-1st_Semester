//Sum of individual digits.
#include <conio.h>
#include <stdio.h>
main()
{
	int x,r,s=0;
	printf ("Enter number: ");
	scanf ("%d",&x);
	while (x!=0)
	{
		r=x%10;
		s=s+r;
		x=x/10;
	}
	printf ("Sum is: %d",s);
	getch();
	return 0;
}
