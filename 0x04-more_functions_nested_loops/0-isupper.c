/*
 * File: 0-isupper.c
 * Auth: Thisekedi Dodi Tshionza
 */
#include "main.h"
#include <stdio.h>
/*
 *main-write a function that check for uppercase Return:Always0.
 */
int main(void)
{
	char ch;
/*Input character from user*/
		printf("Enter any character:");
scanf("%c", &ch);
if (ch >= 'A' &&  ch <= 'Z')
{
printf("'%c'is uppercase letter.", ch);

}


return (0);
}
