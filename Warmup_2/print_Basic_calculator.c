#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    
    printf("Enter first number: \n");
    scanf("%lf", &num1);
    printf("Enter second number: \n");
    scanf("%lf", &num2);

    printf("Sum: %lf \n", num1 + num2);
    printf("Difference: %lf \n", num1 - num2);
    printf("Quotient: %lf \n", num1/num2);
    printf("Product: %lf \n", num1 * num2);

}