#include "main.h"


/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 * Return: On success - 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to First string.
 * @s2: Pointer to Second string.
 * Return: 0 if they are equal, Otherwise - positive value.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/**
 * c_atoi - Custom atoi converts string to int.
 * @s: String.
 * Return: Number if success, -1 if string contains non-numbers.
 */
int c_atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9') /* calculate num */
			num = num * 10 + (s[i] - '0');
		if (s[i] > '9' || s[i] < '0') /* account for non-numbers */
			return (-1);
		i++;
	}
	return (num);
}


/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Copy source to this buffer.
 * @src: This is the source to copy.
 * Return: copy of original source.
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
/**
 *_memset - fill string with m
 *@f_str: empty string
 *@str: string to be filled in f_str
 *@n: number of bytes
 *Return: point to the char
 */
char *_memset(char *f_str, char str, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		f_str[a] = str;
	}
	return (f_str);
}
