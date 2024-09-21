

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	#include <stdio.h>

    // Ingresar 25 números, calcular su promedio e imprimirlo

    int numeros = 0;
    int acumuladores_num = 0;
    float prom = 0;
    int cantidad = 25;
    int i = 0;

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese los numeros:  ", numeros);
        scanf("%i", &numeros);
        acumuladores_num += numeros;
    }

    printf("Los numeros ingesados son: %d\n", acumuladores_num);
	
	prom = acumuladores_num / cantidad;
	printf("El promedio de los numeros igresados es: %.2f", prom);
		
	
	return 0;
}
