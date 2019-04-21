//Split numnbers into digits
#include <conio.h>
#include <stdio.h>
int main()
{
	//clrscr();
	int num,dig1,dig2,dig3,dig4,dig5;
	printf ("Enter 5 digit whole number:-");
	scanf ("%d",&num);
	dig5=num % 10;
	num=num / 10;
	dig4=num % 10;
	num=num / 10;
	dig3=num % 10;
	num=num / 10;
	dig2=num % 10;
	num=num / 10;
	dig1=num % 10;
	num=num / 10;
	printf ("%d %d %d %d %d\n", dig1, dig2, dig3, dig4, dig5);
	getch();
}

