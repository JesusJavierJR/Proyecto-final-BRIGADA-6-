#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
  char* cadena = (char*)malloc(100);
  char* cadena1 = (char*)malloc(100);
  printf("Escribe la cadena\n");
  gets(cadena);
  int n, numero, es, i, j;
  es = 1;
  j = 0;
  char x = ' ';
  n=strlen(cadena);
  for(i=0;i<=n;i++){
    if (isupper(cadena[i]))
      cadena[i] = tolower(cadena[i]);
    if(cadena[i] != x){
      cadena1[j] = cadena[i];
      j++;
    }
  }
  printf("%s\n", cadena1);
  numero = strlen(cadena1);
  printf("%d\n", numero);
  for(i=0;i<=numero/2;i++){
    if(cadena1[i] != cadena1[numero-i-1])
    es = 0;

  }
  if(es)
    printf("Si es palindromo\n");
  else
    printf("No es palindromo\n");

  free(cadena);
  free(cadena1);

}
