#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer that refrence to another pointer.
 * @to: pointer has a value.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
