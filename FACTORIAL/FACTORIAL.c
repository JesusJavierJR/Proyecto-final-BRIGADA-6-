#include<stdio.h>
#include<conio.h>
#include<string.h>

  int main()
  {
  int x,num, factorial;

    printf( "Digita un numero para obtener su factorial\n");
    scanf("%d",&num);

    if (num<0)
	{
		printf("No es valido un numero negativo");
	}
	else
	{
		x=1;
		factorial=num;
		while (x<num)
		{
			factorial=factorial*x;
			x=x+1;
		}
		printf( "El factorial es %d",factorial);
	}
  }