//Area of triangle
#include<conio.h>
#include<stdio.h>
int main()
{
	float length,breadth,Area;
	printf("Enter value of length");
	scanf("%f",&length);
	printf("Enter value of breadth");
	scanf("%f",&breadth);
	if (length>0&&breadth>0)
	{
	Area=length*breadth;
	printf("Area of triangle is %f",Area);
    }
    else
    {
    	printf("Invalid value of length or breadth");
	}
	getch();
	return 0;
}
