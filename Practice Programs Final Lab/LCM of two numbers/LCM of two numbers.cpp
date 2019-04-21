//LCM of two numbers.
#include <conio.h>
#include <stdio.h>
int main()
{
	int a,b,L;
	printf ("Enter two nummbers: ");
	scanf ("%d%d",&a,&b);
	for (L=1;L<=a*b;L++)
		if (L%a==0&&L%b==0)
			break;
	
	printf ("LCM is: %d",L);
	getch();
	return 0;
}
