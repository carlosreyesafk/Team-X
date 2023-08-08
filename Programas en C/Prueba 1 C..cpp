#include <stdio.h>

void nombre(){
	char nombre[3];
	int edad;
	
	printf("Cual es tu nombre: \n");
	scanf("%s", &nombre[0]);
	
	printf("\n Hola Como estas %s? \n", nombre);
	scanf("%s", &nombre[0]);
	
	
	printf("\n %s asi te sientes que raro\nQue edad tienes? \n", nombre);
	scanf("%i", &edad);
	
	if(edad >= 18){
		printf("\nEres mayor que bien");
	}
	else{
		printf("\nSon 30 en najayo");
	}
	
	printf("\nHagamos un recuento:");
	
	printf("\nTu nombre es: %s", nombre);
	printf("\nTe sientes: %s:", nombre);
	printf("\nY tu edad es: %i :", edad);
	printf("\nSolo te falta ser virgen");
	scanf("%i", &edad);
	

	
}

int main(){
	
	nombre();

	return 0;
}