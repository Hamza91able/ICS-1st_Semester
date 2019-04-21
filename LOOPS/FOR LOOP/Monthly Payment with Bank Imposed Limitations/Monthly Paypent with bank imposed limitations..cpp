//Monthly Payment with bank imposed limitations using for loop
#include <stdio.h>
#include <conio.h>
int main()
{
	int i;
	float p,yi,n,mp;
	printf ("\nThe following limitations are imposed:-");
	printf ("\nPrincipal can't be less then $50,000 and more then $500,000");
	printf ("\nYearly intrest can only be between 5%%(0.05) and 15%%(0.15)");
	printf ("\nTerms in years can only be between 10 years and 40 years");
	for (i=0;i<10;i++)
	 {
	 	printf ("\nEnter value of principal=");
	 	scanf ("%f", &p);
	 	printf ("\nEnter value of yearly intrest=");
	 	scanf ("%f", &yi);
	 	printf ("\nEnter terms in years=");
	 	scanf ("%f", &n);
	 	if (p<50000 || p>500000)
	 	 {
	 	 	printf ("Invalid Principal. Restarting...");
	 	 }
	 	else if (yi<0.05 || yi>0.15)
	 	 {
	 	 	printf ("Invalid Yearly Intrest. Restarting...");
		 }	
	 	else if (n<10 || n>40)
	 	 {
	 	 	printf ("Invalid terms in years. Restarting...");
		 }
		else
		 { 
			mp = (p*yi*((1+yi)*(1+yi)))/(((1+yi)*(1+yi))-1);
	 		printf ("\nMontly Payment is %f", mp);
	 	 }
	 }
	getch ();
	return 0; 
}
