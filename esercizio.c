#include <stdio.h>

main()
{
    int lower = 0;
    int upper = 300;
    int fahr;
    int celsius;
    int step = 20;

    // Inizializza fahr a lower
    fahr = lower;

    while (fahr <= upper)
    {
        // Conversione da Fahrenheit a Celsius
        celsius = 5 * (fahr - 32) / 9;
        // Conversione da Fahrenheit a Celsius
        printf("%d\t%d\n", fahr, celsius);
        // Conversione da Fahrenheit a Celsius
        fahr = fahr + step;
    }
    // Ritorno di un valore int dalla funzione main
    return 0;
}
