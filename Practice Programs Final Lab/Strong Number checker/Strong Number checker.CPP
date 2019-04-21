//Number is strong or not.
#include <conio.h>
#include <stdio.h>

main()
{
	//clrscr();
	int originalNum,lastDigit,fact,i,num,sum;
	printf ("Enter number: ");
	scanf ("%d",&num);
	originalNum=num;
	sum=0;
	while (num>0)
	{
		lastDigit= num%10;
		fact=1;
		for (i=1; i<=lastDigit; i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==originalNum)
	{
		printf ("%d is STRONG NUMBER", originalNum);
	}
	else
	{
		printf ("%d is NOT STRONG NUMBER", originalNum);
	}
	getch();
}
