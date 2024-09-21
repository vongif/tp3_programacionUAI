#include <stdio.h>

int main(int argc, char *argv[]) {
    // Ingresar la patente y monto de la multa de 50 autos,
    // Indicar e imprimir cuántos montos superan los $40 
    // y qué porcentaje representa la suma de los que superan los $40 del total cobrado.

    char patente[10]; // Se ajusta para que pueda almacenar una cadena de caracteres
    float multa;
    int i, count = 0;
    float total = 0.0;
    float totalSupera40 = 0.0;
    float porcentajeSupera40 = 0.0;

    for (i = 0; i < 50; i++) {
        printf("Ingrese la patente del auto %d: ", i + 1);
        scanf("%s", patente);  // Se usa %s para capturar cadenas de caracteres
        printf("Ingrese el monto de la multa para %s: ", patente);
        scanf("%f", &multa);  

        total += multa;  // Se suma la multa al total
        if (multa > 40) {
            count++;  // Contamos las multas que superan los $40
            totalSupera40 += multa;  // Se acumula el monto de multas que superan $40
        }
    }

    // Cálculo del porcentaje
    if (total > 0) {  // Evitar división por cero
        porcentajeSupera40 = (totalSupera40 / total) * 100;
    }

    printf("\nCantidad de multas que superan los $40: %d\n", count);
    printf("El porcentaje que representan sobre el total cobrado es: %.2f%%\n", porcentajeSupera40);

    return 0;
}
