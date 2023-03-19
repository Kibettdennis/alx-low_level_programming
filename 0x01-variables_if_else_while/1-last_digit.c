#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Description: 'get the last digit of a number'
 *Return: Always 0 (success)
 */
int main(void)
{
int n;
int lastnum;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum  = lastnum % 10;
if (lastnum > 5)
{
printf("last digit of %d is %d and is greater than 5", n, lastnum);
}
else if (lastnum == 0)
{
printf("last digit of %d is %d and is 0", n, lastnum);
}
else
{
printf("last digit of  %d is %d and is less than 6 and not 0", n, lastnum);
}
return (0);
}
