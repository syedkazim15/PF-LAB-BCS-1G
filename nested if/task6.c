#include <stdio.h>
#include <math.h>
int main()
{
char mode, op;
float num1, num2, num, result;

printf("Select Mode:\n1 for Basic\n2 for Power/Root\nEnter mode: ");
scanf(" %c", &mode);

switch(mode) {
case '1':
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
printf("Enter operator (+, -, *, /): ");
scanf(" %c", &op);
switch(op) {
case '+': result = num1 + num2; printf("Result = %.2f\n", result); break;
case '-': result = num1 - num2; printf("Result = %.2f\n", result); break;
case '*': result = num1 * num2; printf("Result = %.2f\n", result); break;
case '/': if(num2 != 0){ result = num1 / num2; printf("Result = %.2f\n", result);} else { printf("Error! Division by zero.\n"); } break;
default: printf("Invalid operator!\n");
}
break;

case '2':
printf("Enter 's' for square, 'r' for root: ");
scanf(" %c", &op);
switch(op) {
case 's': printf("Enter number: "); scanf("%f", &num); result = num * num; printf("Square = %.2f\n", result); break;
case 'r': printf("Enter number: "); scanf("%f", &num); if(num >= 0){ result = sqrtf(num); printf("Root = %.2f\n", result);} else { printf("Error! Negative.\n"); } break;
default: printf("Invalid choice!\n");
}
break;

default: printf("Invalid mode!\n");
}
return 0;
}