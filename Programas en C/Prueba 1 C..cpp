#include <stdio.h>

void nombre(){
	char nombre[3];
	
	printf("Cual es tu nombre: ");
	scanf("%s", &nombre);
	
	printf("\n Hola Como estas %s ?", nombre);
	
}

int main(){
	
	int x;
	char y;
	
	
	printf ("introduce tu nombre: ");
	scanf ("%c", &y);
	printf("\nHola .");
	
	scanf("%i", &x);
	

	return 0;
}