//Number is perfect or not.
#include <stdio.h>
#include <conio.h>

main()
{
	//clrscr();
	int i,num,sum=0;
	printf ("Enter number: ");
	scanf ("%d",&num);
	for (i=1;i<num;i++)
	{
		if (num%i==0)
		{
			sum += i;
		}
	}
	if (sum == num)
	{
		printf ("%d is PERFECT NUMBER", num);
	}
	else
	{
		printf ("%d IS NOT PERFECT NUMBER", num);
	}
	getch();
}
