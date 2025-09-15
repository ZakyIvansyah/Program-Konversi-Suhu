#include <stdio.h>

int main() {
    float celcius, kelvin, fahrenheit, reamur;

    // Input nilai
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    // Rumus konversi
    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 9 / 5) + 32;
    reamur = celcius * 4 / 5;

    // Output
    printf("Hasil Konversi:\n");
    printf("Kelvin     : %.2f K\n", kelvin);
    printf("Fahrenheit : %.2f F\n", fahrenheit);
    printf("Reamur     : %.2f R\n", reamur);

    return 0;
}
