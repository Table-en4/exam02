#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*range;

	if (start <= end)
		return (NULL);
	range = (int *)malloc(sizeof(*range) * (start - end));
	i = 0;
	while (start < end)
	{
		range[i] = start;
		i++;
		start++;
	}
	return (range);
}
