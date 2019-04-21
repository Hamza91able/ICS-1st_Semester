//swap number withoud 3rd variable.
#include <conio.h>
#include <stdio.h>
int main()
{
	//clrscr();
	int num1,num2;
	printf ("Enter two numbers:-");
	scanf ("%d %d",&num1,&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf ("Result = %d %d",num1,num2);
	getch();
}
