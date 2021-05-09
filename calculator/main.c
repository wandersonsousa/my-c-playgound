#include <stdio.h>

int main(){
    int *num1 = malloc(sizeof(int)); 
    int *num2 = malloc(sizeof(int));
    double *result = malloc(sizeof(double)); 
    short int* operation = malloc(sizeof(short int)); // [1]+ [2]- [3]* [4]/ [0]quit

    printf("Welcome to calculator --built in C lang\n");
    printf("You can make operations with 2 numbers, in all the 4 operations[+-*/]\n");

    getNumbers(num1, num2);
    getOperation(operation);
    processOperation(num1, num2, operation, result);
    return 0;
}

void getNumbers(int *num1, int *num2){
    printf("Type the first number: ");
    scanf("%d", num1);
    printf("Type the second number: ");
    scanf("%d", num2);
    printf("number one: %d and number two %d\n", *num1, *num2);
}

void getOperation(short int* op){
    printf("\nAvailable Operations: \n [0]quit [1]sum [2]sub [3]mult [4]div\n");
    printf("Type the operation: ");
    scanf("%d",op);
}

void processOperation(int *num1, int *num2, short int* op, double *result){
    printf("\nprocessing...");
    printf("%d %d %d %f\n", num1, num2, op, result);
    switch (*op)
    {
    case 0:
        break;
    
    default:
        break;
    }
}
