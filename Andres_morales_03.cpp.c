#include <stdio.h>

int main() {
    float distanciaRecorrida, velocidad, tiempo;

    velocidad = 22.5 / 2; 
    printf("Ingresa las horas recorrida por el antilope: ");
    scanf("%f", &tiempo);

    distanciaRecorrida = velocidad * tiempo; 
    printf("La distancia recorrida en %.2f horas es: %.2f km\n", tiempo, distanciaRecorrida);

    return 0;
}