#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h> 
#include <string.h>
#include <strings.h>

int main(int argc, char const *argv[])
{
	//Variables 

	pid_t child_pid; //pid_t para crear los procesos
	
	int status; //variable de tipo entero para esperar a todos los procesos
	int op;

	char cadena[20] = "hola"; //cadena para almacenar ya sea el nombre del jugador o la palabra sayonnara

	int i;
	int n = 0; //variable n para contar cuantas veces se ha decidido jugar. 

	printf("Ingrese el nombre del jugador\n");
	scanf("%s", cadena);

	while(strcmp(cadena, "sayonnara") != 0){
		
		printf("Bienvenido al Programa\n");
		printf("\n1. Nuevo Juego\n");
		
		n = n+1; //incrementamos el contador
		child_pid = fork();
		if (child_pid == 0) /* fork() regresa 0 para el proceso hijo*/
		{
			//usar_execlp(); 
			execlp("xterm", "xterm", "-e", "./jalisco", NULL);

			//Otra opcion puede ser usando la consola de nuestro KDE. 
			//Si deseamos ocupar la terminal de nuestro KDE lo unico que deberia de cambiar seria la aplicacion a la cual abriremos jalisco

			//execlp("konsole", "konsole", "-e", "./jalisco", NULL);
		}
		printf("Identificador hijo: %d\n", child_pid );
		//Pide de nuevo el nombre
		printf("Ingrese el nombre del jugador\n");
		scanf("%s", cadena);
	}
	for ( i = 0; i < n; i++)
	{
			/* code */
			//Esperamos a que todos los hijos mueran y terminen su procesamiento. 
			wait(&status);

	}
}