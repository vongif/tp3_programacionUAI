

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    // Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el
    // promedio de lo valores pares y el promedio de los valores impares. Luego mostrar por
    // pantalla cuantos números superaron el valor 15.

    int numeros = 0;
    int acumuladores_num = 0;
    int acumulador_par = 0;
    int acumulador_impar = 0;
    float prom_general = 0;
    int cantidad = 8;
    int i = 0;
    int num_pares = 0;
    int num_impares = 0;
    float prom_par = 0;
    float prom_impar = 0;
    int mayores_de_15 = 0;

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese los numeros:  ", numeros);
        scanf("%i", &numeros);
        acumuladores_num += numeros;
    }

    if (cantidad % 2 == 0)
    {
        acumulador_par += numeros;
        num_pares++;
    }
    else
    {
        acumulador_impar += numeros;
        num_impares++;
    }
    if (numeros > 15)
    {
        mayores_de_15++;
    }

    prom_general = (float)acumuladores_num / cantidad;
    printf("El promedio de los numeros ingresados es: %.2f\n", prom_general);

    
    if (num_pares > 0)
    {
        prom_par = (float)acumulador_par / num_pares;
        printf("El promedio de los numeros pares es: %.2f\n", prom_par);
    }
    else
    {
        printf("No se ingresaron numeros pares.\n");
    }

    
    if (num_impares > 0)
    {
        prom_impar = (float)acumulador_impar / num_impares;
        printf("El promedio de los numeros impares es: %.2f\n", prom_impar);
    }
    else
    {
        printf("No se ingresaron numeros impares.\n");
    }

    
    printf("La cantidad de numeros mayores a 15 es: %d\n", mayores_de_15);

    return 0;
}
