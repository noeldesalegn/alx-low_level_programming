#include <stdio.h>
#include"main.h"
/**
 * cap_string - check the code for Holberton School students.
 * @a: is a pointer type char
 * Return: Always 0.
 *
 */
char *cap_string(char *n)
{
int a = 0, i;
int cap = 32; 
int separators[] = {',',';','.','?','"','(',')','{','}',' ','\n','\t'};
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - cap;
}
cap = 0;
for (x = 0; x <= 12; x++)
{
if (n[i] == separators[x])
{
x = 12;
cap = 32;
}
}
}
return (n);
}
