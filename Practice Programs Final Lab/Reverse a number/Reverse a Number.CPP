//Reverse any  number
#include <conio.h>
#include <stdio.h>
int reverse(int);
main()
{
	//clrscr();
	int n,r;
	printf ("Enter number to reverse:-");
	scanf ("%d",&n);
	r=reverse(n);
	printf ("Reverse of the given number is %d",r);
	getch();
}
int reverse (int n)
{
	static int r=0;
	if (n==0)
		return 0;

	r = r * 10;
	r = r + n % 10;
	reverse (n/10);	//recurssion.
	return r;
}
