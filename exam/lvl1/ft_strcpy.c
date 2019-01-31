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

/* a main to test your func follows. make sure to initialize with s1[] 
below to null terminate the array. if you initialize with *s1 
and then printf you may get bus error */

#include <stdio.h>

int	main()
{
	char s1[] = "hello";
	char s2[] = "sup";

	printf("%s\n", s1);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return (0);
}
