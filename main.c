#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP  20

/*
 * Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
 */

fahrToCelsius() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s %s\n", "Fahrenheit", "Celsius");
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

celsiusToFahr() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%s %s\n", "Celsius", "Fahrenheit");
    while(celsius <= upper) {
        fahr = ((celsius * 9.0)/5.0) + 32.0;
        printf("%6.0f %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}


fahrToCelsiusUsingForLoops() {
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}


main() {
    fahrToCelsiusUsingForLoops();
}
