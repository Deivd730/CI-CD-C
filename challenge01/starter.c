#include <stdio.h>

// 1. Declaración o prototipo de la función
int suma(int a, int b);

int main() {
    int num1 = 10;
    int num2 = 25;
    
    // Llamada a la función
    int total = suma(num1, num2);
    
    printf("La suma de %d y %d es: %d\n", num1, num2, total);
    
    return 0;
}

// 2. Definición de la lógica de la función
int suma(int a, int b) {
    return a + b;
}