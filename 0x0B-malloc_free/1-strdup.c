#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
int size = 0;
char *ptr, *ret;
if (!str)
return (NULL);
ptr = str;
while (*ptr++)
size++;
ret = malloc(size + 1);
if (!ret)
return (NULL);
ptr = ret;
while (*str)
*ptr++ = *str++;
*ptr = 0;
return (ret);
}
