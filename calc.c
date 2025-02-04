#include <stdio.h>

int main(){
    char c;
    char cont;
   
    do{
        printf("enter number 1\n");
        float a;
        scanf("%f", &a);
   
        printf("enter number 2\n");
        float b;
        scanf("%f", &b);
   
        printf("enter operation +, -, /, *\n");
        scanf(" %c", &c);
        switch (c){
        case '+' :
            printf("%f \n", a + b);
            break;
        case '-' :
            printf("%f \n", a - b);
            break;
        case '/' :
            printf("%f \n", a / b);
            break;
        case '*' :
            printf("%f \n", a * b);
            break;
        default:
            printf("please enter valid operation");
        }

        printf("Do another operation? y/n:\n");
        scanf(" %c", &cont);
    }
    while(cont == 'y');
    return 0;
}
