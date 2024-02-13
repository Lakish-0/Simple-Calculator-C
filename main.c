#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    double num1;
    double num2;
    char op;
    system("color 70");
    printf("Enter 'first' Number:");
    scanf("%lf", &num1);
    printf("Enter Operator ||'+' '-' '/' '*'|| : ");
    scanf("%s", &op);
    printf("Enter 'Second' Number:");
    scanf("%lf", &num2);

    if(op=='+'){
        printf("%f", num1 + num2);
    }
    else if(op=='-'){
        printf("%f", num1 - num2);
    }
    else if(op=='/'){
        printf("%f", num1 / num2);
    }
    else if(op=='*'){
        printf("%f", num1 * num2);
    }
    else{
        printf("InValid Operator");
    }


    return 0;
}
