#include <stdio.h>
/**
*main- starting point
*Description: outputs the sizes of different datatypes
*Return: 0
*/
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d  byte(s)\n", sizeof(long));
printf("size of a long long long int: %d byte(s)\n", sizeof(long long));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
