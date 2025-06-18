#ifndef PROMEDIOS_H
#define PROMEDIOS_H

#include <stdio.h>
#include <stdlib.h>

// Función para capturar calificaciones dinámicamente
float* capturar_calificaciones(int cal) {
    float *calificaciones = (float *)calloc(cal, sizeof(float));
    if (calificaciones == NULL) {
        printf("Error al asignar memoria.\n");
        return NULL;
    }

    for (int i = 0; i < cal; i++) {
        printf("Ingrese la calificación #%d: ", i + 1);
        if (scanf("%f", &calificaciones[i]) != 1 || calificaciones[i] < 0.0 || calificaciones[i] > 10.0) {
            printf("Calificación inválida.\n");
            free(calificaciones);
            return NULL;
        }
    }
    return calificaciones;
}

// Función para calcular el promedio y determinar si aprobó
void calcular_aprobacion(int cal, float *calificaciones) {
    float suma = 0.0, promedio;

    for (int i = 0; i < cal; i++) {
        suma += calificaciones[i];
    }

    promedio = suma / cal;
    printf("Promedio del alumno: %.2f\n", promedio);

    if (promedio >= 6.0) {
        printf("El alumno aprobó la materia.\n");
    } else {
        printf("El alumno debe recursar la materia.\n");
    }
}

#endif // PROMEDIOS_H