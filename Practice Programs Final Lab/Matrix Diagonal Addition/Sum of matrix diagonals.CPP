//Sum of diagnol elements of a matrix.
#include <stdio.h>
#include <conio.h>

main()
{
	//clrscr();
	static int array[10][10];
	int m,n,i,j,a=0,sum=0;
	printf ("\nEnter the order of the matrix: \n");
	scanf ("%d %d", &m,&n);
	if (m==n)
	{
		printf ("\nEnter elemts :\n");
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				scanf ("%d",&array[i][j]);
			}
		}
		printf ("\nThe given matrix is \n");
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				printf ("\t%d",array[i][j]);
			}
			printf ("\n");
		}
		for (i=0;i<m;i++)
		{
			sum = sum + array[i][i];
            a = a + array[i][m - i - 1];
		}
		printf ("\nThe sum of the main diagonal elemets is = %d\n", sum);
		printf ("\nThe sum of the off diagonal elemets is = %d\n", a);
	}
	else
	{
		printf ("The given matrix is not square\n");
	}
	getch();
}
