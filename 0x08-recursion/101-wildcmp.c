#include "main.h"
/**
 * strlen_no_wilds - Returns the len of the str
 * @s: string to be measured
 * Return: return the length
 */
int strlen_no_wilds(char *s)
{
	int length = 0, index = 0;

	if (*(s + index))
	{
		if (*s != '*')
			length++;

		index++;
		length += strlen_no_wilds(s + index);
	}
	return (length);
}
/**
 * iterate_wild - Iterates through the str
 * @str: The string to be iterated
 * Return: void
 */
void iterate_wild(char **str)
{
	if (**str == '*')
	{
		(*str)++;
		iterate_wild(str);
	}
}
/**
 * postfix_match - checks if str matches postfix
 * @s: the string to be matched
 * @pstfix: the postfix
 * Return: return postfix identical
 */
char *postfix_match(char *s, char *pstfix)
{
	int s_len = strlen_no_wilds(s) - 1;
	int p_len = strlen_no_wilds(pstfix) - 1;

	if (*pstfix == '*')
		iterate_wild(&pstfix);

	if (*(s + s_len - p_len) == *pstfix && *pstfix != '\0')
	{
		pstfix++;
		return (postfix_match(s, pstfix));
	}
	return (pstfix);
}
/**
 * wildcmp - comparing two strs
 * @s1: the first str to be compared
 * @s2: the second str to be compared
 * Return: return 1 otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
