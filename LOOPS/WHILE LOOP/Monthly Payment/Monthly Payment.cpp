//Monthly Payment using while loop
#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0;
	float p,yi,n,mp;
	while (i<10)
	 {
	 	printf ("\nEnter value of principal=");
	 	scanf ("%f", &p);
	 	printf ("\nEnter value of yearly intrest=");
	 	scanf ("%f", &yi);
	 	printf ("\nEnter terms in years=");
	 	scanf ("%f", &n);
	 	mp = (p*yi*((1+yi)*(1+yi)))/(((1+yi)*(1+yi))-1);
	 	printf ("\nMontly Payment is %f", mp);
	 	i++;
	 }
	getch ();
	return 0; 
}
