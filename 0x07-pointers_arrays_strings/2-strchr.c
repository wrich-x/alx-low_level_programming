#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')

	{
		if (s[i] == c)

		{
			return (i);
		}
		i++;
	}
	return (-1);
}

