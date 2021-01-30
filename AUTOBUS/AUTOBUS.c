#include <stdio.h>
int calP(int cam[][2], int b)
{
  int Su = 0, Ba = 0;
  int a,k;
  for (a= 0; a < b; a++)
  {
  for (k= 0; k < 1; k++)
  {
  Su= Su + cam[a][k];
  }
  for (k=1; k<2; k++)
  {
  Ba = Ba + cam[a][k];
  }
  }
  return Su - Ba;
}
int main()
{
  int numPFin;
  int numP [5][2]={{3,0},{5,1},{2,1},{4,3},{0,8}};
  int tam=sizeof(numP)/sizeof(numP[0]);
  numPFin= calP(numP,tam);
 printf("El total de pasajeros que quedan es: %d\n", numPFin);
}