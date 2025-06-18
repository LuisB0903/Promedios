#include "promedios.h"

int main() {
    int cal;

    printf("Ingrese el número de calificaciones: ");
    if (scanf("%d", &cal) != 1 || cal <= 0) {
        printf("Número inválido.\n");
        return 1;
    }
    float *calificaciones = capturar_calificaciones(cal);
    calcular_aprobacion(cal, calificaciones);
    return 0;
}