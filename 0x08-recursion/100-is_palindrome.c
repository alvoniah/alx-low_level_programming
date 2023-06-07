#include "main.h"
/**
 * string_length - determines the length of string
 * @s: input string
 * Return: return the string length
 */
int string_length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += string_length(s + len);
	}
	return (len);
}
/**
 * palindrome_check - determines if string is the palindrome
 * @s: input string
 * @len: length of the string
 * @num: number of the string
 * Return: 1 otherwise 0
 */
int palindrome_check(char *s, int len, int num)
{
	if (s[num] == s[len / 2])
		return (1);
	if (s[num] == s[len - num - 1])
		return (palindrome_check(s, len, num + 1));
	return (0);
}
/**
 * is_palindrome - determines if string is palindrome
 * @s: input string
 * Return: 1 otherwise 0
 */
int is_palindrome(char *s)
{
	int len = string_length(s);
	int num = 0;

	if (!(*s))
		return (1);
	return (palindrome_check(s, len, num));
}
