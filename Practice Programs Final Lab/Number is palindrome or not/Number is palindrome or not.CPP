//Program to check if number is palindrome or not.
#include <stdio.h>
#include <conio.h>
int main()
{
	//clrscr();
	int originalnumber,reversednumber=0,remainder,n;
	printf ("Enter number to check");
	scanf ("%d",&n);
	originalnumber = n;

	while(n!=0)
	{
		remainder = n%10;
		reversednumber = reversednumber*10 + remainder;
		n /= 10;
	}

	if (originalnumber == reversednumber)
	{
	printf ("%d is a palindrome number",originalnumber);
	}
	else
	{
		printf ("%d is not a palindrome number",originalnumber);
	}
	getch();
}
