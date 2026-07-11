#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*dup;

	i = 0;
	len = 0;
	while (src[i] != 0)
	{
		len++;
		i++;
	}
	dup = (char *)malloc((len+1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
