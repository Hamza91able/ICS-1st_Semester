//Area of trapezoid
#include<conio.h>
#include<stdio.h>
int main()
{
	float b1,b2,h,Area;
	printf("Enter value of base1");
	scanf("%f",&b1);
	printf("Enter value of base2");
	scanf("%f",&b2);
	printf("Enter value of height");
	scanf("%f",&h);
	if (b1>0&&b2>0&&h>0)
	{
		Area=((b1+b2)*(h/2));
		printf("Area of trapezoid is %f",Area);
	}
	else
	{
		printf("Invalid value of bases or height");
	}
	getch();
	return 0;
}
