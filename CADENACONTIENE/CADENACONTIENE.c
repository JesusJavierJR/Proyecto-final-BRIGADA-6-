#include <stdio.h>
#include <string.h>

int main(void) 
{
  char cadena1[100];
  char cadena2[50];
  printf("\t\n Introduce una cadena");
  scanf("%s", cadena1);
  printf("\t\n Introduce otra cadena");
  scanf("%s", cadena2);
  if (strstr(cadena1, cadena2) != NULL)
	{
	printf("\t\n Existe %s dentro de %s\n", cadena2, cadena1);
	} 	
	else 	
	{
	printf("\t\n No existe %s dentro de %s\n", cadena2, cadena1);
	}
}