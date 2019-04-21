//Multiplication of two Matrix.
#include <stdio.h>
#include <conio.h>

int main()
{
	printf ("\nMatrix Multiplication Calculator");
	printf ("\nMax 10x10 matrix allowed.");
	printf ("\n_____________________________________\n");
	int Matrix1[10][10],Matrix2[10][10],multiply[10][10];
	int i,j,k,a,b,c,d,sum=0;
	
	//First Matrix
	printf ("\nEnter Rows of first matrix:");
	scanf ("%d",&a);
	printf ("\nEnter Column of first matrix:");
	scanf ("%d",&b);
	printf ("\nEnter elements of first matrix:\n");
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
		{
			scanf ("%d",&Matrix1[i][j]);
		}
	}
	
	//Second Matrix
	printf ("\nEnter Rows of second natrix:");
	scanf ("%d",&c);
	printf ("\nEnter Column of second matrix:");
	scanf ("%d",&d);
	if (b !=c)
	{
		printf ("Invalid Number of Rows.");
	}
	else
	{
		printf ("\nEnter elements of second matrix:\n");
		for (i=0;i<c;i++)
		{
			for (j=0;j<d;j++)
			{
				scanf ("%d",&Matrix2[i][j]);
			}
		}
	
		//Multiplication
		for (i=0;i<a;i++)
		{
			for (j=0;j<b;j++)
			{
				for (k=0;k<c;k++)
				{
					sum=sum+Matrix1[i][k]*Matrix2[k][j];
				}
				multiply[i][j]=sum;
				sum=0;
			}
		}
	
		//Printing Product
		printf ("\nProduct of two matrix is:-\n");
		for (i=0;i<a;i++)
		{
			for (j=0;j<d;j++)
			{
				printf ("%d\t",multiply[i][j]);
			}
			printf ("\n");
		}
		printf ("\nPress any key to exit.");
	}
	getch();
}
