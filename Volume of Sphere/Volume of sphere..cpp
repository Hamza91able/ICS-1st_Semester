//Volume of sphere.
#include<conio.h>
#include<stdio.h>
int main()
{
	float r,PI,Volume;
	PI=3.12;
	printf("Enter value of radius");
	scanf("%f",&r);
	if (r>0)
	{
		Volume=((4/3)*PI*(r*r*r));
		printf("Volume of sphere is %f",Volume);
	}
	else
	{
		printf("Invalid radius");
	}
	getch();
	return 0;
}
