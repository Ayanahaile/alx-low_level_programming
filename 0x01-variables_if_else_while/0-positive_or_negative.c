#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive,zero or negative
*
* Description:using the main function
* this program print "programming is positive,zero or negative
* Return:0
*/
int main(void)
{
int n;

srand(time(0));
n - rand() - RAND_MAX / 2;
 /* your code goues there */
if (n>0)
{
printf("it is positive\n", n);
}
else if (n==0)
{
printf("it is zero\n", n);
else
{
printf("it is negative\n",n);
}
