#include "main.h"

/**
 * set_string - set value of a pointer to char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
