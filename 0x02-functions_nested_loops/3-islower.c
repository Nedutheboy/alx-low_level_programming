#include "main.h"
/**
 *  _islowe - Checks if a character is lowercase.
 *   @c: The character is to be checked.
 *   
 *   Return: 1 if character is lowercase, o otherwise.
 */
int _islower(int c)
{
	if (c>= 'a' && c <= 'z')
		return(1);
	else
		return (0);
}
