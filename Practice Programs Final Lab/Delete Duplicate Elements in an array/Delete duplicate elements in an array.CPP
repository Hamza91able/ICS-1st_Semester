//Delete Duplicate elements in an array.
#include <conio.h>
#include <stdio.h>
main()
{
	//clrscr();
	int arr[20], i ,j, k, size;
	printf ("\nEnther array size: ");
	scanf ("%d",&size);
	printf ("\nEnter numbers: ");
	for (i=0;i<size;i++)
	{
		scanf ("%d",&arr[i]);
	}
	printf ("\nArray with Unique list: ");
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;)
		{
			if (arr[j]==arr[i])
			{
				for (k=j;k<size;k++)
				{
					arr[k]=arr[k+1];
				}
				size--;
			}
			else
			{
				j++;
			}
		}
	}
	for (i=0;i<size;i++)
	{
		printf ("%d ",arr[i]);
	}
	getch();
}
