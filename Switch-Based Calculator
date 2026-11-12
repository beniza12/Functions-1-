
#include <stdio.h>

float calculate(float num1, float num2, char operator){
    
float result;
   
switch(operator){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
       break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        result = num1 / num2;
       break;
        default:
        printf("Invalid");
       
    } return result;
}
int main() {

    float num1, num2;
    char operator;
    float result;

    printf("Enter first number: ");
        scanf("%f", &num1);

    printf("Enter operator(+,-,*,/): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
        scanf("%f",& num2);

    result = calculate(num1,num2,operator);
    
    printf("Result: %.2f %c %.2f = ",num1,operator, num2);
    
    printf("%.2f",result);
    
    

    return 0;
}
