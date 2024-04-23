#include <stdio.h>

int main() {
    int pastelesARealizar;
    float harinaPorPastel = 3.0 / 100; 
    float cantidadTotalHarina;

    printf("Ingrese el número de pasteles a realizar: ");
    scanf("%d", &pastelesARealizar);

    cantidadTotalHarina = harinaPorPastel * pastelesARealizar;

    printf("La cantidad de harina a utilizar es: %.2f kg\n", cantidadTotalHarina);

    return 0;
}