#include <stdio.h>
#include <string.h>
void contar(const char * palabra, int caracterArr[][2])
{
 int x, contador=0, z=0, condic, fac=0, test=0;
 int variableX=0;
 char* caracterB;
 printf("Ingrese una cadena \n");
 palabra = malloc (256);
 scanf("%255s", palabra );
 caracterB = strdup(palabra);
 condic=strlen(palabra);
 for (x=0; x<condic; x++)
 {
 	while (variableX<condic)
 	{
		if(x!=variableX && variableX<condic)
 		{
 		if (caracterB[x]==caracterB[variableX])
		  {
 			contador=contador+1;
 			caracterB[variableX]=0;
 		  }
	        }
 	variableX++;
 	}
 	if (caracterB[x]!=0)
 	 {
 	 if (contador >= 1)
 		{
		 caracterArr[z][1]= contador + 1;
		 caracterArr[z][0]= caracterB[x];
		 test=caracterArr[z][0];
 		}
 		else
		{
		 caracterArr[z][1]= 1;
		 caracterArr[z][0]= caracterB[x];
		 test=caracterArr[z][0];
		}
		z++;
		fac=fac+1;
 		}
		 contador=0;
		 variableX=0;
  }
  for (x=0 ; x<fac ; x++)
  {
  for (variableX=0 ; variableX<2 ; variableX++)
  {
  printf("%ld,",caracterArr[x][variableX]);
  }
  printf("\n");
   }
}
int main(){
char * cadenita;
int a2[1000][2];
contar(cadenita, a2);
}