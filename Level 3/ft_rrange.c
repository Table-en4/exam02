#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*rrange;
	int	i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		end -= (start > end) ? -1 :1;
	}
	rrange[i] = end;
	return (rrange);
}
