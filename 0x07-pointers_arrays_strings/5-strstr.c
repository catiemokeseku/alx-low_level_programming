#include "main.h"

/**
 * *_strstr - function
 *
 * Description: locates a substring
 *
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - 1] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
