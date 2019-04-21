//Simple Intrest on Loan 2 using for loop.
#include<conio.h>
#include<stdio.h>
int main()
{
	int i;
	float principal,time,intrest,rate;
	for (i=0;i<5;i++)
	 {
	 	printf ("\nEnter value of principal=");
	 	scanf ("%f",&principal);
	 	printf ("\nEnter value of time=");
	 	scanf ("%f",&time);
	 	if (time<=1)
	 	 {
	 	 	rate = 0.06;
		 }
		else if (time<6)
		 {
		 	rate = 0.07;
		 }
		else if (time>=6 && time <=10)
		 {
		 	rate = 0.08;
		 }
		else
		 {
		 	rate = 0.09;
		 } 
		intrest = principal*rate*time;
		printf ("\nIntrest on loan is %f", intrest);
	 }
	getch ();
	return 0; 
}

