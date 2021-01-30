#include <stdio.h>
#include <string.h>
int validaCadena (const char *Cad)
{
 int Tam = strlen (Cad);
 if (Tam % 2 != 0)
  {
    printf ("%d\n", 0);
    return 0;
  }
  if (Tam == 0)
  {
    printf ("%d\n", 0);
    return 0;
  }
  int TamCero = Tam / 2;
  int TamUno = Tam / 2;
  if (Cad[0] == *"0")
  {
    int y = 0;
    for (y = 0; y < TamCero - 1; y++)
  {
  if (Cad[y] != Cad[y + 1])
    {
      printf ("%d\n", 0);
      return 0;
    }
 }
 if (Cad[y + 1] == *"1")
 {
   for (int x = y + 1; x < Tam - 1; x++)
   {
    if (Cad[x] != Cad[x + 1])
    {
    printf ("%d\n", 0);
    return 0;
    }
  }
 }
 }
 else if (Cad[0] == *"1")
 {
 int y = 0;
 for (y = 0; y < TamUno - 1; y++)
 {
 if (Cad[y] != Cad[y + 1])
   {
   printf ("%d\n", 0);
   return 0;
   }
 }
 if (Cad[y + 1] == *"0")
 {
   for (int x = y + 1; x < Tam - 1; x++)
    {
    if (Cad[x] != Cad[x + 1])
    {
    printf ("%d\n", 0);
    return 0;
    }
    }
 }
 }
 printf ("%d\n", 1);
 return 0;
}