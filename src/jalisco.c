#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h> 
#include <string.h>
#include <strings.h>

//Se tiene que usar la funcion de exit 


int main()
{

	int num; //Numero del jugador
	int opcion; 
	//char jugador[100];
	
	
	do{
		/*
		printf("\n**************\n");
		printf("Bienvenido\n");
		printf("Jugador:\n");
		scanf("%s", jugador);

		printf("\n");
		*/
		printf("\n1. Jugar\n");
		printf("\n2. No jugar\n");
			
		printf("\nOpcion:\n");

		scanf("%d", &opcion);

		switch(opcion){

			case 1:

				printf("Dame un numero:\n");
				scanf("%d", &num);

				printf("Te Gane: %d\n", num+1);

			break;

			case 2:
				printf("Adios.\n");
				_exit(1);
			break;

		}
	}while(opcion != 2);
	
	//return 0;
}