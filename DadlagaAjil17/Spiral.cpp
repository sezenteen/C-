#include <stdio.h>
#include <math.h>

int main() {
    double real = 0.0;
    double imaginary = 0.5;
    int iterations = 1000;

    for(int i = 0; i < iterations; i++) {
        if(real == imaginary) {
            real += sqrt(2);
            imaginary = -1;
        } else {
            double tempReal = real * real - imaginary * imaginary;
            double tempImaginary = 2 * real * imaginary;
            real = tempReal;
            imaginary = tempImaginary;
            real += 1;
        }

        printf("The updated complex number is: %lf + %lfi\n", real, imaginary);
    }

    return 0;
}
