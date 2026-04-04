// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.
#include <stdio.h>

float convertTemperature(float celsius) {
    // Formula: Fahrenheit = (Celsius × 9/5) + 32
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = convertTemperature(celsius);
    
    printf("\n%.2f° Celsius = %.2f° Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}