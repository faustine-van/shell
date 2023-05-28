# Simple shell

- implementation of simple shell

## Descrption

This is simple shell that handle command such as `cd`, `ls`, `pwd`, ` mkdir` and so on.
It handle environment variables, builtinn command and executables files.

## step used to build it
steps to implement shell in c:
  - step1:Understand the purpose and all functions to used
  - step2:implement loop that always ask user to enter command.
  - step3:parse user input command
  - step4:execute commands
  - step5:implent builtin_commands
## Builtin functions
List of builtin funtion supported by this simple shell:
 | Buitin Function| Descriptions |
 | :------------ |   :---:      |
 | `env`      |Print current environment variables |
 | `setenv`   |Set new environment variable `setenv var_name va_value` |
 | `unsetenv` |Remove environment variable `unsetenv var_name va_value`|
## How to use the shell:
  * Install;
  ```
  (your_terminal)$ git clone <this repository>
  (your_terminal)$ cd simple_shell
  ```
  * Compile:
  ```
  gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
  ```
  * Usage: non-interactive mode
  ```
  echo "/bin/ls" | ./hsh
  ```
  * Usage: interactive mode
  ```
  (your_terminal)$ ./hsh
  ```
  ## Example
  ```
  #cisfun$ /bin/ls -l
  total 100
  -rw-r--r-- 1 runner runner  2029 May 24 05:49 _env.c
  -rw-r--r-- 1 runner runner  1052 May 19 13:26 _execute.c
  -rw-r--r-- 1 runner runner  1767 May 19 13:27 _strings1.c
  -rw-r--r-- 1 runner runner  1351 May 24 05:53 _strings2.c
  -rw-r--r-- 1 runner runner  2516 May 19 13:29 _strings3.c
  -rw-r--r-- 1 runner runner  2074 May 19 13:30 built-in.c
  -rw-r--r-- 1 runner runner  1483 May 19 13:31 handle_path.c
  -rwxr-xr-x 1 runner runner 44128 May 24 05:53 main
  -rw-r--r-- 1 runner runner   752 May 19 13:21 main.c
  -rw-r--r-- 1 runner runner  1225 May 19 13:22 main.h
  -rw-r--r-- 1 runner runner  1520 May 24 05:48 man_1_simple_shell
  -rw-r--r-- 1 runner runner   164 May 24 05:48 prompt.c
  -rw-r--r-- 1 runner runner   506 May 19 13:32 readline.c

 #cisfun$ exit
 (your_terminal)$
 ```
## Bugs
 At this time, there are no known bugs.

 More info on our blog [here](https://www.tutorialspoint.com/unix    /unix-what-is-shell.htm).

# _Authors_:
 1. NIYIBIZI Elysée | [Github](https://github.com/elyse502).
 2. MUHAYEMARIYA Faustine | [Github](https://github.com/faustine-    van)
