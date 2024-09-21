#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    // Ingresar30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20,
    // cuantosentre 20 y 30 y cuantos son mas de 30. 
    // Luego mostrar el porcentaje de cadagrupo en el total.

    int numeros = 0;
    int acumuladores_num = 0;
    int num__uno_a_diez = 0;
    int num__diez_a_veinte = 0;
    int num__veinte_a_treinta = 0;
    int num__mayor_a_treinta = 0;
    float porcentaje__uno_a_diez = 0;
    float porcentaje__diez_a_veinte = 0;
    float porcentaje__veinte_a_treinta = 0;
    float porcentaje__mayor_a_treinta = 0;
    int cantidad = 30;
    int i = 0;
    
    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese los numeros:  ", numeros);
        scanf("%i", &numeros);
        acumuladores_num += numeros;
    

    if (numeros > 0 && numeros <= 10)
    {
        num__uno_a_diez++;
    }
    else if(numeros >= 11 && numeros <= 20)
    {
        num__diez_a_veinte++;
    }
    else if (numeros > 20 && numeros <= 30)
    {
        num__veinte_a_treinta++;
    }
    else if(numeros > 30){
        num__mayor_a_treinta++;
    }
    }



    porcentaje__uno_a_diez = ((float)num__uno_a_diez / cantidad) * 100;
    printf("El porcentaje de los numeros del uno al diez, ingresados es: %.2f%%\n", porcentaje__uno_a_diez);
    porcentaje__diez_a_veinte = ((float)num__diez_a_veinte / cantidad) * 100;
    printf("El porcentaje de los numeros del diez al veinte, ingresados es: %.2f%%\n", porcentaje__diez_a_veinte);
    porcentaje__veinte_a_treinta = ((float)num__veinte_a_treinta / cantidad) * 100;
    printf("El porcentaje de los numeros del veinte al treinta, ingresados es: %.2f%%\n", porcentaje__veinte_a_treinta);
    porcentaje__mayor_a_treinta = ((float)num__mayor_a_treinta / cantidad) * 100;
    printf("El porcentaje de los numeros mayores a treinta, ingresados es: %.2f%%\n", porcentaje__mayor_a_treinta);
    
    return 0;
}