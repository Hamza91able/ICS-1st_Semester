/*2D Array.
	Printing a Matrix.*/
#include <conio.h>
#include <stdio.h>

int main()
{
	int Array[3][4]={{1,2,3,11},{4,5,6,22},{7,8,9,33}};
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("%d\t", Array[i][j]);
		}
		printf ("\n");
	}
	getch();
}
