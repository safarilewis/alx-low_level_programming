#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: First String
 * @s2: Second string
 * @n: Number of characters in s2 added to s1
 * Return: Pointer to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	char *s3;
	s3 = malloc(sizeof(s3) + n *sizeof(char));
	for (i = 0; *(s1 + i); i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j <= n; j++)
	{
		*(s3 + i + j) = s2[j];
	}
	if (s3 == NULL)
		return (NULL);
	return (s3);
}
