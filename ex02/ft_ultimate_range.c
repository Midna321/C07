#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int 	ft_ultimate_range(int **range, int min, int max)
{
	int 	range2;
	int 	*numarray;
	int 	i;
	if (min >= max)
	{
		*range = NULL;
		return 0;
	}
	else
		range2 = max - min;
	*range = &range2;
	printf("Range size %i\n", **range);
	numarray = (int*)malloc(sizeof (int) * (range2));
	if (numarray == NULL)
	{
		return (-1);
	}
	i = 0;
	while(min < max)
	{
		numarray[i] = min;
		printf("All'index %i corrisponde %i\n",i,numarray[i]);
		i++;
		min++;
	}
	return **range;
}

int main()
{
	int *range;
	int min = 1;
	int max = 21;
	int num = ft_ultimate_range(&range,min,max);
}
