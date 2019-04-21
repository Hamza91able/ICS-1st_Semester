//Largest and Smallest number in an Array.
#include <conio.h>
#include <stdio.h>
main()
{
	//clrscr();
	int arr[100];
	int i, max, min, size;
	printf ("Enter size of array");
	scanf ("%d",&size);
	printf ("Enter elements in array");
	for (i=0;i<size;i++)
	{
		scanf ("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for (i=1;i<size;i++)
	{

		if (arr[i]>max);
		{
			max=arr[i];
		}
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf ("Maximun element = %d\n", max);
	printf ("Minimum element = %d\n", min);
	getch();
}
