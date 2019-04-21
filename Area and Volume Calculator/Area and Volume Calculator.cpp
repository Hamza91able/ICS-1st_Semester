//Area and Volume Calculator
#include <conio.h>
#include <stdio.h>

void Circle(float,float,float);
void Rectangle(float,float,float);
void Square(float,float);
void Trapezoid(float,float,float,float);
void Triangle(float,float,float);
void Sphere(float,float,float);

int main()
{
	float radius,Area,Volume,length,breadth,width,base1,base2,height,PI;
	char Choice,n;
	printf ("Area and Volume Calculator\n");
	do
	{
		printf ("\n");
		printf ("\nUse numbers to navigate the menu.");
		printf ("\n1.Area of Circle");
		printf ("\n2.Area of Rectangle");
		printf ("\n3.Area of Square");
		printf ("\n4.Area of Trapezoid");
		printf ("\n5.Area of Triangle");
		printf ("\n6.Volume of sphere");
		printf ("\n7.Exit\n");
		printf ("\nInput=");
		n=getch();
		switch(n)
		{
			case '1':
				printf ("1");
				printf ("\nArea of Circle");
				Circle(radius,Area,PI);
				break;
			case '2':
				printf ("2");
				printf ("\nArea of Rectangle");
				Rectangle(length,width,Area);
				break;
			case '3':
				printf ("3");
				printf ("\nArea of Square");
				Square(length,Area);
				break;
			case '4':
				printf ("4");
				printf ("\nArea of Trapezoid");
				Trapezoid(base1,base2,height,Area);
				break;
			case '5':
				printf ("5");
				printf ("\nArea of Triangle");
				Triangle(length,breadth,Area);
				break;
			case '6':
				printf ("5");
				printf ("\nVolume of Sphere");
				Sphere(radius,Volume,PI);
				break;
			case '7':
				printf ("7");
				return 0;
				break;
			default:
				printf ("\nInvalid Input. Please try again.");
		}
		printf ("\nDo you want to continue? Y/N:");
		Choice=getch();
	}
	while (Choice == 'Y' || Choice == 'y');
}

void Circle(float radius,float Area,float PI)
{
	PI=3.14;
	printf("\nEnter radius:");
	scanf("%f",&radius);
	if (radius>0)
	{
		Area=PI*radius*radius;
		printf("\nArea of circle is %f\n",Area);
	}
	else
	{
		printf("\nInvalid radius value\n");
	}
}

void Rectangle(float length,float width,float Area)
{
	printf("\nEnter value of length:");
	scanf("%f",&length);
	printf("\nEnter valuse of width:");
	scanf("%f",&width);
	if (length>0 && width>0)
	{
		Area=length*width;
		printf("\nArea of rectangle is %f\n",Area);
	}
	else
	{
		printf("\nInvalid value of length or width\n");
	}
}

void Square(float length,float Area)
{
	printf("\nEnter value of one side:");
	scanf("%f",&length);
	if (length>0)
	{
		Area=length*length;
		printf("\nArea of square is %f\n",Area);
	}
	else
	{
		printf("\nInvalid value of length\n");
	}
}

void Trapezoid(float base1,float base2,float height,float Area)
{
	printf("\nEnter value of base1:");
	scanf("%f",&base1);
	printf("\nEnter value of base2:");
	scanf("%f",&base2);
	printf("\nEnter value of height:");
	scanf("%f",&height);
	if (base1>0 && base2>0 && height>0)
	{
		Area=((base1+base2)*(height/2));
		printf("\nArea of trapezoid is %f\n",Area);
	}
	else
	{
		printf("\nInvalid value of bases or height\n");
	}
}

void Triangle(float length,float breadth,float Area)
{
	printf("\nEnter value of length:");
	scanf("%f",&length);
	printf("\nEnter value of breadth:");
	scanf("%f",&breadth);
	if (length>0 && breadth>0)
	{
	Area=length*breadth;
	printf("\nArea of triangle is %f\n",Area);
    }
    else
    {
    	printf("\nInvalid value of length or breadth\n");
	}
}

void Sphere(float radius,float Volume,float PI)
{
	PI=3.14;
	printf("\nEnter value of radius:");
	scanf("%f",&radius);
	if (radius>0)
	{
		Volume=((4/3)*PI*(radius*radius*radius));
		printf("\nVolume of sphere is %f\n",Volume);
	}
	else
	{
		printf("\nInvalid radius\n");
	}
}
