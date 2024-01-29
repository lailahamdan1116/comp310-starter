#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    
    printf("Enter first number: \n");
    scanf("%lf", &num1);
    printf("Enter second number: \n");
    scanf("%lf", &num2);

    printf("\n Sum: %lf", num1 + num2);
    printf("\n Difference: %lf", num1 - num2);
    printf("\n Quotient:%lf", num1/num2);
    printf("\n Product: %lf \n", num1 * num2);

}