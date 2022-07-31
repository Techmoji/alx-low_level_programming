#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("Value of 'c' before the call: %c\n", c);
   printf("Address of 'c' before the call: %p\n", &c);
   printf("Value of 'c' before the call: %c\n", *p);
   printf("Address of p before the call: %p\n", p);
   printf("Value of p before the call %d\n", *p);
   modif_my_char_var(p, c);
   printf("Value of 'c' after the call: %c\n", c);
   printf("Address of 'c' after the call: %p\n", &c);
   printf("Value of 'c' after the call: %c\n", *p);
   printf("Address of p after the call: %p\n", p);
   printf("Value of p after the call %d\n", *p);
   return (0);
}
