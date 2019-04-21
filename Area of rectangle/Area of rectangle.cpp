//Area of rectangle
#include<stdio.h>
#include<conio.h>
int main()
{
	float l,w,Area;
	printf("Enter value of length");
	scanf("%f",&l);
	printf("Enter valuse of width");
	scanf("%f",&w);
	if (l>0&&w>0)
	{
		Area=l*w;
		printf("Area of rectangle is %f",Area);
	}
	else
	{
		printf("Invalid value of length or width");
	}
	getch();
	return 0;
}
