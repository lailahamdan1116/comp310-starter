#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    
    printf("Enter first number: \n");
    scanf("%lf", &num1);
    printf("Enter second number: \n");
    scanf("%lf", &num2);

    printf("Sum: %lf", num1 + num2);
    printf("Difference: %lf", num1 - num2);
    printf("Quotient: %lf", num1/num2);
    printf("Product: %lf", num1 * num2);

}