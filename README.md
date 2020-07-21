# fork()

La llamada fork al sistema crea una copia del proceso que la llama. Muchas aplicaciones requieren que el
proceso hijo ejecute un código diferente del de su padre. La familia exec de llamadas al sistema
proporciona una característica que permite traslapar al proceso que llama con un modulo ejecutable nuevo.
La manera tradicional de utilizar la combinación de fork­exec es dejar que el hijo ejecute el exec para
el nuevo programa mientras el padre continua con la ejecución del código original.

Las seis variaciones de la llamada exec al sistema se distinguen por la forma en la que son pasados los
argumentos de la linea de comandos y el ambiente,y si es necesario proporcionar la ruta de acceso y el
nombre del archivo ejecutable. Las llamadas execl(execl, execlp, execle) pasan los
argumentos de la linea de comando como una lista y son utiles si se conoce el numero de argumentos de la
linea de comandos. Las llamadas execv(execv, execvp y execve) pasan los argumentos de la
linea de comandos en un arreglo de argumentos.
