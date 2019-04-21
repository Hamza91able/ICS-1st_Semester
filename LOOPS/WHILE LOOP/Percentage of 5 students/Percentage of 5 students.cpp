//Percentage of 5 students using while loop.
#include <conio.h>
#include <stdio.h>

int main()
{
	float sub1,sub2,sub3,sub4,sub5,sub6,per;
	int i=0;
	printf ("Every subject carries max marks of 100.");
	while (i<5)
	{
		printf ("\nEnter marks of sub1=");
		scanf ("%f",&sub1);
		printf ("\nEnter marks of sub2=");
		scanf ("%f",&sub2);
		printf ("\nEnter marks of sub3=");
		scanf ("%f",&sub3);
		printf ("\nEnter marks of sub4=");
		scanf("%f",&sub4);
		printf ("\nEnter marks of sub5=");
		scanf ("%f",&sub5);
		printf ("\nEnter marks of sub6=");
		scanf ("%f",&sub6);
		per = ((sub1+sub2+sub3+sub4+sub5+sub6)/600)*100;
		printf ("Your Percentage is %f", per);
		i++;
	}
	getch ();
	return 0;
}
