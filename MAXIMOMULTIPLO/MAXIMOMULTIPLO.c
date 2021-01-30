#include <stdio.h>
int main()
{
int num, divisor, limite;
printf ("Introduce un divisor\n");
scanf ("%d",& divisor);
printf ("Introduce algún limite\n");
scanf ("%d",& limite);
if ((limite % divisor) == 0)
num = limite;
else
{
num=limite-(limite % divisor);
}
printf ("El maximo multiplo es: %d",num);
return 0;
}