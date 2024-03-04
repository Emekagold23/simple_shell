#include "shell.h"

/**
 * interactive - checks if the shell is in interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */

int interactive(info_t *info)

{
	return ((isatty(STDIN_FILENO) && info->readfd <= 2) ? 1 : 0);
}

/**
 * is_delim - checks if a character is a delimiter
 * @c: the character to check
 * @delim: a string of delimiters
 * Return: 1 if true, 0 if false
 */

int is_delim(char c, char *delim)

{
	int i = 0;

	while (delim[i])
	{
	if (delim[i] == c)
	{
		return (1);
	}
	i++;
	}

	return (0);
}

/**
 * _isalpha - checks if a character is alphabetic
 * @c: The character to check
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)

{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)

{
	int sign = 1;
	int output = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
		sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
		output = output * 10 + (s[i] - '0');
		}
		i++;
	}

	return (sign * output);
}
