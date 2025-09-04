#include <stdio.h>

int main(){
    int num1, num2, r;
    char op;

    printf("enter 1st no.: ");
    scanf("%d", &num1);

    printf("enter 2nd no.: ");
    scanf("%d", &num2);

    printf("enter operation to be carried out( eg: + , - , * , / ): ");
    scanf(" %c", &op);

    if (op == '+') {
        r = num1 + num2;
        printf("sum is: %d\n", r);
    }
    else if (op == '-') {
        r = num1 - num2;
        printf("difference is: %d\n", r);
    }
    else if (op == '*') {
        r = num1 * num2;
        printf("multiplication is: %d\n", r);
    }
    else if (op == '/') {
        r = num1 / num2;
        printf("division is: %d\n", r);
    }
    return 0;
                }
