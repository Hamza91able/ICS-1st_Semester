//Area of circle
#include<conio.h>
#include<stdio.h>
int main()
{
	float radius,Area,PI;
	PI=3.14;
	printf("Enter radius....");
	scanf("%f",&radius);
	if (radius>0)
	{
		Area=PI*radius*radius;
		printf("Area of circle is %f",Area);
	}
	else
	{
		printf("Invalid radius value");
	}
	getch();
	return 0;
}
