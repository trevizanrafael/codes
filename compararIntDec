#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compararInt (const void *a, const void *b) 
{
	return (*(int *)a - *(int *)b);
}
int compararIntDec (const void *a, const void *b) 
{
	return (*(int *)b - *(int *)a);
}
int main ()
{
	int arr[] = {3,1,4,1,5,9,2};
	int n = sizeof(arr) / sizeof(arr[0]),i;
	qsort(arr,n,sizeof(int),compararInt);
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	qsort(arr,n,sizeof(int),compararIntDec);
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
