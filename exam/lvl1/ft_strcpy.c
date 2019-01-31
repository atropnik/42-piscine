#include <unistd.h>

char 	*ft_strcpy(char *s1, char *s2)
{
	char *src;
	char *dest;
	
	dest = s1;
	src = s2;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
