#include <stdio.h>

char *_strstr(char *haystack, char *needle);

int main(void)
{
    char *s = "hello, world";
    char *f = "lo";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				i++;
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
