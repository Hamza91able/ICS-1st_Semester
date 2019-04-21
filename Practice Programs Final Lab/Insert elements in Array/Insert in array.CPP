//Insert Elemts in an array.
#include <conio.h>
#include <stdio.h>

main()
{
	//clrscr();
	int array[100],position,c,n,value;
	printf ("Enter Number of elements in array\n");
	scanf ("%d", &n);
	printf ("Enter number of elements elements\n", n);
	for (c=0;c<n;c++)
	{
		scanf ("%d",&array[c]);
	}
	printf ("Enter the location where you wish to insert an element\n");
	scanf ("%d",&position);
	printf ("Enter the value to insert\n");
	scanf ("%d",&value);
	for (c=n-1;c>=position - 1;c--)
	{
		array[c+1] = array [c];
	}
	array[position-1]=value;
	printf ("Resultant array is \n");
	for (c=0;c<=n;c++)
	{
		printf ("%d\n", array[c]);
	}
	getch();
}
