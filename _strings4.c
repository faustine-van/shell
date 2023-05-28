#include "main.h"

/**
 *_getenv - get an environment variable specified by name
 *@name: name of varibale specified
 *Return: value or NULL when no match found
 */
char *_getenv(char *name)
{
	size_t len = _strlen(name);

	char **env = environ;

	while (*env != NULL)
	{
		/*when match fount*/
		if (_strncmp(*env, name, len) == 0 && (*env)[len] == '=')
		{
			return (&((*env)[len + 1]));
		}
		env++;
	}
	/*when there is no match*/
	return (NULL);
}
/**
 *_strncmp - compate two string s1 and s2
 *@s1: first string to be compared
 *@s2: second string to be compared
 *@n: maximum number of characters to be compared
 *Return: 0< or
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	int a = 0;
	int res;

	while (--n > 0)
	{
		if (s1[a] == 0) /*bith strings are equal*/
			return (0);
		res = (s1[a] - s2[a]);
	}
	return (res);
}
/**
 *_strncpy - copies string from src
 *@src: source of string
 *@dest: destination
 *@n: size of src to be added to dest
 *Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	dest[a] = '\0';
	return (dest);
}
