#include "main.h"
/**
 * postive_or_negative - checks for postive or negative numbers
 *
 * @i: the number to be checked
 *
 * Return: always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is not postive\n", i);
	else
		printf("%d is postive\n", i);
}
