//Searching in an Array.
#include <conio.h>
#include <stdio.h>

void LinearSearch (int [10], int);

int main()
{
	int num;
	int Array [10]={10,20,30,40,50,60,70,80,90,100};
	printf ("Enter number to search in Array:");
	scanf ("%d",&num);
	LinearSearch (Array,num);
	getch();
}

void LinearSearch(int Array[10],int num)
{
	int c=0;
	int i=0;
	for (i=0;i<10;i++)
	{
		if (Array[i]==num)
		{
			printf ("Array is found at %d positiom\n",i);
			main();
			break;
		}
		else
		{
			c++;
		}
		if (c>=10)
		{
			printf ("Number not found");
		}
	}
}
