//Matrix multiplication then transpose.
#include <conio.h>
#include <stdio.h>

main()
{
	//clrscr();
	int M1[10][10],M2[10][10],T[10][10],Multiply[10][10];
	int i,j,a,b,c,d,k,sum=0;
	printf ("\nEnter rows of first matrix: ");
	scanf ("%d",&a);
	printf ("\nEnter colum of first matrix: ");
	scanf ("%d",&b);
	printf ("\nEnter elements of first matrix: ");
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
		{
			scanf ("%d",&M1[i][j]);
		}
	}
	printf ("\nEnter rows of second matrix: ");
	scanf ("%d",&c);
	printf ("\nEnter column of second matrix: ");
	scanf ("%d",&d);
	if (b!=c)
	{
		printf ("\nInvalid number of rows");
	}
	else
	{
		printf ("\nEnter elements of second matrix: ");
		for (i=0;i<c;i++)
		{
			for (j=0;j<d;j++)
			{
				scanf ("%d",&M2[i][j]);
			}
		}

		for (i=0;i<a;i++)
		{
			for (j=0;j<b;j++)
			{
				for (k=0;k<c;k++)
				{
					sum= sum+M1[i][j]*M2[k][j];
				}
				Multiply[i][j]=sum;
				sum=0;
			}
		}

		printf ("\nProdunct of two matrix: \n");
		for (i=0;i<a;i++)
		{
			for (j=0;j<d;j++)
			{
				printf ("\t%d",Multiply[i][j]);
			}
			printf ("\n");
		}
		printf ("\nTranspose of matrix is: \n");
		for (j=0;j<d;j++)
		{
			for (i=0;i<a;i++)
			{
				printf ("\t%d", Multiply[i][j]);
			}
			printf ("\n");
		}
	}
	getch();
}
