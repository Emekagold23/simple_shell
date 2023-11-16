#include "shell.h"

/**
 * cp_strN - copies the first 'n' characters from source to destination
 * @dest: the destination string to be copied to
 * @src: the source string
 * @n: the maximum number of characters to be copied
 * Return: the concatenated string
 */

char *cp_strN(char *dest, const char *src, int n)

{
	char *originalDest = dest;

	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	*dest = '\0';
	return (originalDest);
}

/**
 * cat_strN - concatenates the first 'n' characters from source
 * to the end of destination
 * @dest: the first string
 * @src: the second string
 * @n: the maximum number of characters to be concatenated
 * Return: the concatenated string
 */

char *cat_strN(char *dest, const char *src, int n)

{
	char *originalDest = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	*dest = '\0';
	return (originalDest);
}

/**
 * find_char - locates the first occurrence of a character in a string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: a pointer to the first occurrence of the character in the string,
 * or NULL if not found
 */

char *find_char(const char *s, char c)

{
	while (*s != '\0')
	if (*s == c)
	{
	return ((char *)s);
	}
	s++;
	return (NULL);
}
