#include "main.h"
/**
 *_cd - cd command(changing directory)
 *@path: path to be used
 *Return: (0)success
 */
int _cd(char *path)
{
	char curr_path[PATH_MAX], prev_dir[PATH_MAX];
	char *dir_home, *final_path = path;
	int res;

	dir_home = getenv("HOME");
	if (final_path == NULL || strcmp(final_path, "") == 0)
	{
		if (dir_home != NULL)
			final_path = dir_home;
		else
		{
			printf("failed to get home directory");
			return (-1);
		}
	}
	if (!getcwd(curr_path, sizeof(curr_path)))
		return (-1);
	if (final_path[0] == '~')
	{
		if (final_path[1] == '\0' || final_path[1] == '/')
		{
			final_path = dir_home;
		}
		else
		{
			char temp_path[PATH_MAX];

			snprintf(temp_path, sizeof(temp_path),
					"%s/%s", dir_home, final_path + 2);
			final_path = temp_path;
		}
	}
	if (_strcmp(final_path, "-") == 0)
	{
		if (prev_dir == '\0')
		{
			perror("No previous directory");
			return (1);
		}
		final_path = prev_dir;
		printf("%s \n", final_path);
	}
	res = chdir(final_path);
	if (res == -1)
	{
		perror("Bash");
		return (-1);
	}
	_strncpy(prev_dir, curr_path, sizeof(prev_dir) - 1);
	prev_dir[sizeof(prev_dir) - 1] = '\0';
	return (0);
}
