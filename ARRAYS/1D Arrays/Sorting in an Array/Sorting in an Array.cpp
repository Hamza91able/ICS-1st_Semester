//Sorting in an Array.
#include <conio.h>
#include <stdio.h>

void Ascending_Array(int [10],int,int,int);
void Descending_Array(int [10],int,int,int);

int main()
{
	int Array[10]={35,23,88,30,100,2,40,81,1,0};
	int Array2[10]={35,23,88,30,100,2,40,81,1,0};
	int n,choice,i,j,k;
	printf ("\nArray Sorting System\n");
	do
	{
		printf ("\nUse number to navigate the menu.\n");
		printf ("\nSort the following Array into?");
		printf ("\n35,23,88,30,100,2,40,81,1,0\n");
		printf ("\n1.Ascending Order");
		printf ("\n2.Descending Order");
		printf ("\nInput=");
		n=getch();
		switch(n)
		{
			case '1':
				printf ("1\n");
				Ascending_Array(Array,i,j,k);
				break;
			case '2':
				printf ("2\n");
				Descending_Array(Array2,i,j,k);
				break;
			default:
				printf ("\nInvalid Selection.");
		}
		printf ("\n\nDo you want to continue? Y/N\n");
		choice=getch();
	}
	while (choice=='Y' || choice=='y');
}

void Ascending_Array (int Array[10],int i,int j,int k)
{
	for (i=0;i<10;i++)
	{
		for (j=i;j<10;j++)
		{
			if (Array[i]>Array[j])
			{
				k = Array[i];
				Array [i] = Array [j];
				Array [j] = k;
			}
		}
	}
	printf ("\nNumber arranged in Ascending order");
	for (i=0;i<10;i++)
	{
		printf ("\n%d",Array[i]);
	}
}

void Descending_Array (int Array[10],int i,int j,int k)
{
	for (i=0;i<10;i++)
	{
		for (j=i;j<10;j++)
		{
			if (Array[i]<Array[j])
			{
				k = Array[i];
				Array [i] = Array [j];
				Array [j] = k;
			}
		}
	}
	printf ("\nNumber arranged in Descending order");
	for (i=0;i<10;i++)
	{
		printf ("\n%d",Array[i]);
	}
}
