#include <stdio.h>

int main() {
char dept;
int sem;

printf("Enter Department (C for CS, E for Electrical, B for Business): ");
scanf(" %c", &dept);
printf("Enter Semester (1, 2, 3): ");
scanf("%d", &sem);

switch(dept) {
case 'C':
case 'c':
switch(sem) {
case 1: printf("CS Sem 1: Programming Fundamentals\n"); break;
case 2: printf("CS Sem 2: Object Oriented Programming\n"); break;
case 3: printf("CS Sem 3: Data Structures\n"); break;
default: printf("Invalid semester!\n");
}
break;

case 'E':
case 'e':
switch(sem) {
case 1: printf("Electrical Sem 1: Basic Electronics\n"); break;
case 2: printf("Electrical Sem 2: Circuit Theory\n"); break;
case 3: printf("Electrical Sem 3: Power Systems\n"); break;
default: printf("Invalid semester!\n");
}
break;

case 'B':
case 'b':
switch(sem) {
case 1: printf("Business Sem 1: Principles of Management\n"); break;
case 2: printf("Business Sem 2: Marketing Management\n"); break;
case 3: printf("Business Sem 3: Financial Accounting\n"); break;
default: printf("Invalid semester!\n");
}
break;

default:
printf("Invalid Department!\n");
}
return 0;
}