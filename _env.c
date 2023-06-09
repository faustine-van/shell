#include "main.h"

/**
 * _setenv - Updates or adds an environment variable.
 * @var_name: Variable name.
 * @var_value: Variable value.
 * Return: 0 - success,otherwise -1
 */
int _setenv(char *var_name, char *var_value)
{
	int i = 0;
	size_t name_len;
	char *var_new;

	name_len = _strlen(var_name);
	i = 0;
	/*updating an existing variable*/
	while (environ[i])
	{
		if (strncmp(environ[i], var_name, name_len) == 0)
		{
			var_new = var_build(var_name, var_value);
			/*Not sure but wanted to clear its mem b4 writing*/
			environ[i] = NULL;
			environ[i] = _strdup(var_new);
			free(environ[i]);
			environ[i] = _strdup(var_new);
			free(var_new);
			return (0);
		}
		i++;
	}
	/*adding a variable that never existed before*/
	var_new = var_build(var_name, var_value);
	free(environ[i]);
	environ[i] = _strdup(var_new);
	i++;
	environ[i] = NULL;
	var_new = NULL;

	return (0);
}
/**
 * var_build - Builds an environment variable from its name and value.
 * @var_name: Variable name.
 * @var_value: Variable value.
 * Return: String containing full environment variable.
 */
char *var_build(char *var_name, char *var_value)
{
	char *new_var;
	size_t var_len;

	var_len = _strlen(var_name) + _strlen(var_value) + 2;
	new_var = malloc(sizeof(char) * var_len);
	if (new_var == NULL)
	{
		perror("Error: Insufficient memory\n");
		return (NULL);
	}
	_memset(new_var, 0, var_len);
	/*Data in the form: var_name=var_value*/
	new_var = _strcat(new_var, var_name);
	new_var = _strcat(new_var, "=");
	new_var = _strcat(new_var, var_value);

	return (new_var);
}
/**
 * _unsetenv - removes an environment variable.
 * @var_name:variable name.
 * Return:0 if successful, otherwise - -1.
 */
int _unsetenv(char *var_name)
{
	int i = 0;
	char **env_temp;
	size_t name_len;

	name_len = _strlen(var_name);
	while (environ[i])
	{
		if (strncmp(environ[i], var_name, name_len) == 0)
		{
			if (environ[i] != NULL)
			{
				env_temp = environ;
				free(env_temp[i]);
				while (env_temp[i + 1] != NULL)
				{
					env_temp[i] = env_temp[i + 1];
					i++;
				}
				env_temp[i] = NULL;
			}
		}
		i++;
	}
	return (0);
}
