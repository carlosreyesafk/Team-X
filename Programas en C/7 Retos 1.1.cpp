#include <stdio.h>
#include <windows.h>

int reto, volver, parar;

void reto1(){
	
	int repetir;
	
	do{
				
		system("cls");
		printf("Reto 1:\n");
		
		int num1, num2, resultado;
				
		printf("\nIngrese el numero 1: ");
		scanf("%s", &num1);
		printf("\nIngrese el numero 2: ");
		scanf("%s", &num2);
				
		if (num1 > num2){
			
			printf("\nEl %i es mayor que el %i ", num1, num2);
			resultado = num1 - num2;
			printf("\nLa diferencia de %i con respecto a %i es: %i", num1, num2, resultado);
		}
		
		else if (num1 == num2){
			
			printf("\nEl %i es igual que el %i ", num1, num2);
			printf("\nNo hay diferencia: ");		
			}
			
		else{
			
			printf("\nEl %i es menor que el %i ", num1, num2);
			resultado = num2 - num1;
			printf("\nLa diferencia de %i con respecto a %i es: %i", num1, num2, resultado);
		}
				
					
		printf("\n\nRepetir el Reto #1: \n(1. Si / 2. No)\n");
		scanf("%i", &repetir);
		system("cls");
				
	}while(repetir == 1);
}

void reto2(){
	
	int repetir;
	
	do{
				
		system("cls");
		printf("Reto 2:\n");
		
		int num1, num2;
				
		printf("\nIngrese el numero limite: ");
		scanf("%i", &num1);
		printf("\nIngrese el numero a comparar: ");
		scanf("%i", &num2);
				
		if (num1 >= num2){
			
			printf("\nEl numero %i se encuentra en el rango, gracias ", num2);
			
		}

		else{
			
			printf("\nEl numero %i excede el limite permitido ", num2);
			
		}
				
					
		printf("\n\nRepetir el Reto #2: \n(1. Si / 2. No)\n");
		scanf("%i", &repetir);
		system("cls");
				
	}while(repetir == 1);
	
}

void reto3(){
	
	int repetir;
	
	do{
				
		system("cls");
		printf("Reto 3:\n");
		
		int num1, num2, num3;
				
		printf("\nIngrese el limite inferior: ");
		scanf("%i", &num1);
		printf("\nIngrese el limite superior: ");
		scanf("%i", &num2);
		printf("\nIngrese el numero a comparar: ");
		scanf("%i", &num3);
				
		if (num3 <= num2 & num3 >= num1){
			
			printf("\nEl numero %i se encuentra dentro del rango, gracias ", num3);
			
		}

		else{
			
			printf("\nEl numero %i excede el limite permitido ", num3);
			
		}
				
					
		printf("\n\nRepetir el Reto #3: \n(1. Si / 2. No)\n");
		scanf("%i", &repetir);
		system("cls");
				
	}while(repetir == 1);
	
}

int main(){
	
	
	do{
	
	do{
		printf("Menu");
		printf("\n-------");
		printf("\nReto #1");
		printf("\nReto #2");
		printf("\nReto #3");
		printf("\nReto #4");
		printf("\nReto #5");
		printf("\nReto #6");
		printf("\nReto #7\n");
		scanf("%i", &reto);
	
		switch(reto){
		
			case 1:
				
				reto1();
				break;
				
			case 2:
				
				reto2();
				break;
				
			case 3:
				
				reto3();
				break;
			case 4:
				printf("Reto 4:");
				break;
			case 5:
				printf("Reto 5:");
				break;
			case 6:
				printf("Reto 6:");
				break;
			case 7:
				printf("Reto 7:");
				break;
			default:
				system("cls");
				printf("Opcion no valida, vuelve a intentarlo: \n\n");
			}
	}while(reto < 1 | reto > 7);
	
		system("cls");
		printf("\nVolver al Menu (1. Si / 2. No)\n");
		scanf("%i", &volver);
		system("cls");
		
	}while(volver == 1);
	
	printf("\nGracias por usar el programa");


	return 0;
}