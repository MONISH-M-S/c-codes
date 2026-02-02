#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, result;
    int choice;

    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.imag);

    printf("\nEnter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.imag);

    printf("\nComplex Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Addition
            result.real = c1.real + c2.real;
            result.imag = c1.imag + c2.imag;
            break;

        case 2: // Subtraction
            result.real = c1.real - c2.real;
            result.imag = c1.imag - c2.imag;
            break;

        case 3: // Multiplication
            result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
            result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
            break;

        case 4: // Division
            if ((c2.real * c2.real + c2.imag * c2.imag) == 0) {
                printf("Error: Division by zero!\n");
                return 0;
            }
            result.real = (c1.real * c2.real + c1.imag * c2.imag) /
                          (c2.real * c2.real + c2.imag * c2.imag);
            result.imag = (c1.imag * c2.real - c1.real * c2.imag) /
                          (c2.real * c2.real + c2.imag * c2.imag);
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("\nResult = %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
