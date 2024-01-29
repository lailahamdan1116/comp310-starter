#include <stdio.h>
#include <string.h>

int main(){
    char strArray[]= "Hello";

    int length = strlen(strArray);
    for (int i = 0, j= length-1; i<j; i++, j--){
        char temp = strArray[i];
        strArray[i] = strArray[j];
        strArray[j] = temp;
    }
    printf("%s\n", strArray);
}