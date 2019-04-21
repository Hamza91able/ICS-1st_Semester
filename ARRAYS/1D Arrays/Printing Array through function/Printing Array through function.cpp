//Printing Array through function.
#include <stdio.h>
#include <conio.h>

void Display(int [10]);

int main()
{
	int Array [10]={10,20,30,40,50,60,70,80,90,100};
	Display (Array);
	getch();
}

void Display(int Array [10])
{
	int i;
	for (i=0;i<10;i++)
	{
		printf ("%d\n",Array[i]);
	}
}
