#include "main.h"

/**
 * main - Entry point
 *
 *Description: 'To check for alphabetic character'
 *c: 'the character to be checked'
 *
 * Return: 1 if c is an alphabet; and 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
