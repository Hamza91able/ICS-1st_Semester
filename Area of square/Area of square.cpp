//Area of square
#include<conio.h>
#include<stdio.h>
int main()
{
	float length,Area;
	printf("Enter value of one side");
	scanf("%f",&length);
	if (length>0)
	{
		Area=length*length;
		printf("Area of square is %f",Area);
	}
	else
	{
		printf("Invalid value of length");
	}
	getch();
	return 0;
}
