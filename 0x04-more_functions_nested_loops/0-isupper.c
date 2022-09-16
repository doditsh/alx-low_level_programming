
#include "main.h"
#include <stdio.h>
/*
 *main-write a function that check for uppercase Return:Always0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
