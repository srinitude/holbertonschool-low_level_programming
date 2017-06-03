#include "holberton.h"

/**
 * wildcard - Wildcard checker
 * @f: First string
 * @s: Second string
 * @fir_idx: First index
 * @sec_idx: Second index
 *
 * Return: 1 if matching, 0 if not
 */

int wildcard(char *f, char *s, int fir_idx, int sec_idx)
{
	if ((f[fir_idx] != '\0') && (s[sec_idx] != '\0'))
	{
		if ((f[fir_idx] != s[sec_idx]) && (s[sec_idx] != '*'))
			return (0);
		if ((fir_idx == sec_idx) && (f[fir_idx] == s[sec_idx]))
			return (wildcard(f, s, fir_idx + 1, sec_idx + 1));
		if ((s[sec_idx] == '*') && (s[sec_idx + 1] != '*'))
		{
			fir_idx = sec_idx + 1;
			return (wildcard(f, s, fir_idx, sec_idx + 1));
		}
	}
	return (1);
}

/**
 * wildcmp - Compares two strings & sees if identical
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if identical, 0 if not
 *
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcard(s1, s2, 0, 0));
}

