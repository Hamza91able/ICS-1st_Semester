//Program to count digits.
#include <conio.h>
#include <stdio.h>
int main()
{
	//clrscr();
	long long n;
	int count = 0;
	printf ("Enter a number:");
	scanf ("%lld",&n);
	while (n!=0)
	{
		n /= 10;
		count++;
	}
	printf ("Number of digits: %d",count);
	getch();
}
