#include <stdio.h>
/**
*main - a program that prints the alphabet in lowercase
*
*return : Always 0 (success)
*/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar (alp[i]);
}
putchar ('\n');
return (0);
}
