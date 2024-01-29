#include <stdio.h>
#include <stdlib.h>

int main(){
    int numbers = {1, 2, 3, 4 ,5};
    int sum = 0;
    int length = sizeof(numbers)/sizeof(numbers[0]);

    for(int i=1; i<1; i++){
        sum+=numbers[i];
    }
    double average = (double) sum /length;
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);
}