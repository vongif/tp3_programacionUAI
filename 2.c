
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
    // Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros  

    int numeros = 0; 
    int cantidad = 10;
    int positivos = 0; 
    int negativos = 0;
    int ceros = 0;
    int acumuladores_num = 0;
    int i = 0;
    
      for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese los numeros:  ", numeros);
        scanf("%i", &numeros);
        acumuladores_num += numeros;
          
        if (numeros > 0) {
            positivos++;
        } else if (numeros < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    // Imprimir los resultados
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Ceros: %d\n", ceros);     


	return 0;
}
