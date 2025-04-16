#include <stdio.h>
#include <stdlib.h>
//optional
#include <windows.h>
//optional

int main()
{
    //variables decleared
    double num1;
    double num2;
    char op;
    //optional
    system("color 70");
    //optional
    
    printf("Enter 'first' Number:");
    scanf("%lf", &num1);
    printf("Enter Operator ||'+' '-' '/' '*'|| : ");
    scanf("%s", &op);
    printf("Enter 'Second' Number:");
    scanf("%lf", &num2);

    //if , else if, else statement
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
        printf("InValid Operator.Enter Vaild Operator.");
    }

   
    return 0;
}
