#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	range;
	int	*numarray;

	j = 0;
	if (min > max)
		return (NULL);
	range = max - min;
	numarray = (int *) malloc (sizeof (int) * (range));
	if (numarray == NULL)
		return (NULL);
	while (min < max)
		numarray[j++] = min++;
	return (numarray);
}
