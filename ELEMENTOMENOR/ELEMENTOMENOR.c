#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arreglo[0];
	int tam, menor, i;
	menor= arreglo[0];
	printf("Numero de valores a comparar\n");
	scanf("%d", &tam);
	printf ("Dime los numeros\n");
	for (int i=1; i<=tam; i++)
	{
		printf ("Numero %d\n",i);
		scanf ("%d", &arreglo[i]);
	if (arreglo[i]<menor)
	  {
		menor=arreglo[i];
	  }
	}
	printf ("El menor es %d\n", menor);
	return 0;
}