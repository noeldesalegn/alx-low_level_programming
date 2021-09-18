#include "main.h"
#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
char *tmp = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (tmp);
}
