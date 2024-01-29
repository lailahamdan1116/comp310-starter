#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *file;
    char filename[] = "example.txt";
    char line[100];

    file = fopen("filename", "w");

    if(file == NULL){
        printf("Error!");
        exit (1);
    }

    fprintf(file, "Hello, World!");
    fclose(file);
    return 0;

    if(file == NULL){
        printf("Error!");
        exit(1);
    }
    while(fgets(line, 100, file)){
        printf("%s", line);
    }
    fclose(file);

    
}