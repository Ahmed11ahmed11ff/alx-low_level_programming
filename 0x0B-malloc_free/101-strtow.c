#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int count = 0, i;
	int len = strlen(s);

	if (len == 0)
	{
		return 0;
	}

	if (s[0] != ' ')
	{
		count++;
	}

	for (i = 1; i < len; i++)
	{
		if (s[i] == ' ' && s[i - 1] != ' ')
		{
			count++;
		
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 *         or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix;
       	int count, i, j, k, len, m;
	char *token;
	
	if (str == NULL)
	{
		return NULL;
	}

	count = count_word(str);
	if (count == 0)
	{
		return NULL;
	}

	matrix = malloc(sizeof(char *) * (count + 1));
	if (matrix == NULL)
	{
		return NULL;
	}

	for (i = 0, k = 0; i < count; i++, k++)
	{
		while (str[k] == ' ')
		{
			k++;
		}
		len = 0;
		for (j = k; str[j] != ' ' && str[j] != '\0'; j++, len++)
		{}
		token = malloc(sizeof(char) * (len + 1));
		if (token == NULL)
		{
			for (m = 0; m < i; m++)
			{
				free(matrix[m]);
			}
			free(matrix);
			return (NULL);
		}
			strncpy(token, &str[k], len);
			token[len] = '\0';
			matrix[i] = token;
			k = j;
	}

	matrix[count] = NULL;
return (matrix);
}
