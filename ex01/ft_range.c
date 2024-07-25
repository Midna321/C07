#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int j = 0;
	int range;
	int *numarray;
	if(min > max)
	{
		return NULL;
	}
	range = max - min;
	numarray=(int*)malloc(sizeof(int) * (range));
	if(numarray == NULL)
	{
		printf("Memory allocation failed");
		return NULL;
	}
	while(min < max)
	{
		numarray[j] = min;
		j++;
		min++;
	}
	return numarray;
}


int main()
{
	int min = 0;
	int max = 0;
	int *numarray = ft_range(min, max);
	int size = max - min;
	printf("Array size : %i\n",size);
	int i = 0;
	while( i < size)
	{
		printf("Ad index %i corrisponde %i\n",i,numarray[i]);
		i++;
	}
	return 0;
}








