#include <stdio.h>

int main() {
    int numeroPanes;
    float costoTotal;

    printf("Ingrese el número de panes que solicita el cliente: ");
    scanf("%d", &numeroPanes); 

    costoTotal = numeroPanes * 8;

    printf("El costo total de la venta es: %.2f bs\n", costoTotal);

    return 0;
}