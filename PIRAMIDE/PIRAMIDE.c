#include <stdio.h>
#include <stdlib.h>
int main()
{
	int Numero1, Numero2, Numero3;
	char opcion;
	printf("Ingresa el tamaño que deseas que tenga la cadena/piramide: ");
	scanf("%i",&Numero2);
	getchar();
	printf("\n");
	    for(Numero1=1;Numero1<=Numero2;Numero1++)
	    {
		for(Numero3=1;Numero3<=Numero1;Numero3++)
		{
		printf("%i ",Numero1);
		}
		printf("\n");
		}
	return 0;
}