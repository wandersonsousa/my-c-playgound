#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

bool running = true;
int main()
{
    bool *running_ptr = &running;
    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    double *result = malloc(sizeof(double));
    short int *operation = malloc(sizeof(short int)); // [1]+ [2]- [3]* [4]/ [0]quit

    printf("Welcome to calculator --built in C lang\n");
    printf("You can make operations with 2 numbers, in all the 4 operations[+-*/]\n\n");

    getNumbers(num1, num2);
    getOperation(operation);
    processOperation(num1, num2, operation, result, running_ptr);

    if (running == false)
    {
        exit(0);
    }
    else
    {
        clearScreen();
        printf("O resultado da operação é: %f\n\n", *result);
        main();
    }

    return 0;
}

void getNumbers(int *num1, int *num2)
{
    printf("Type the first number: ");
    scanf("%d", num1);
    printf("Type the second number: ");
    scanf("%d", num2);
}

void getOperation(short int *op)
{
    printf("\nAvailable Operations: \n [0]quit [1]sum [2]sub [3]mult [4]div\n");
    printf("Type the operation: ");
    scanf("%d", op);
}

void processOperation(int *num1, int *num2, short int *op, double *result, bool *running)
{
    printf("\nprocessing...\n\n");
    switch (*op)
    {
    case 0:
        *running = false;
        break;
    case (1):
        *result = *num1 + *num2;
        break;
    case (2):
        *result = *num1 - *num2;
        break;
    case (3):
        *result = *num1 * *num2;
        break;
    case (4):
        *result = *num1 / *num2;
        break;
    default:
        break;
    }
}









void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}