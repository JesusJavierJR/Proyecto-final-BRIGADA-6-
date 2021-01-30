#include "../interseccion.c"

int main (){

	printf("\nPrueba Uno:\n");
	int primero [] = {5,6,3,4,1,0,};
	int segundo [] = {4,3,8,2,4,5,0};
	int expResult [] = {};
	encontrar(primero, 5, segundo, 9,expResult);

	printf ("\nPrueba Dos:\n");
	int primero2 [] ={23,14,89,18,9,2};
	int segundo2 [] = {3,1,7};
	int expResult2 [] = {};
	encontrar(primero2,14,segundo2,1,expResult2);

	return 0;
}