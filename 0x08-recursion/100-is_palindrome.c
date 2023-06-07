#include "main.h"
/**
 * is_palindrome - checks if a word is a palindrome
 * @s: pointer to a string
 * Return: a palindrome
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		return (is_palindrome(s + 1));
	}
	else
		return (0);
}
