#include <stdlib.h>

char	*ft_get_tail(char *buf, int ret, int offset)
{
	int		i;
	char	*res;

	i = offset;
	res = (char *) malloc(offset);
	while (i >= 0)
	{
		res[i] = buf[ret];
		i--;
		ret--;
	}
	return (res);
}
