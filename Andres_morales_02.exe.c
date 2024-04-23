#include <stdio.h>

int main() {
    float distanciaNadadaPorHora = 120.0 / 3;
    int horas;
    float distanciaRecorrida;

    printf("Ingrese el número de horas: ");
    scanf("%d", &horas);

    distanciaRecorrida = distanciaNadadaPorHora * horas;

    printf("El pingüino nadará %.2f km en %d horas.\n", distanciaRecorrida, horas);

    return 0;
}