#include <stdio.h>

int main() {
char light, ped;

printf("Enter light (R for Red, Y for Yellow, G for Green): ");
scanf(" %c", &light);

switch(light) {
case 'R':
case 'r':
printf("Pedestrian button pressed? (Y for yes, N for no): ");
scanf(" %c", &ped);
switch(ped) {
case 'Y':
case 'y': printf("Stop and cross\n"); break;
case 'N':
case 'n': printf("Stop and wait\n"); break;
default: printf("Invalid pedestrian input!\n");
}
break;

case 'G':
case 'g':
printf("Pedestrian button pressed? (Y for yes, N for no): ");
scanf(" %c", &ped);
switch(ped) {
case 'Y':
case 'y': printf("Go but watch for pedestrians\n"); break;
case 'N':
case 'n': printf("Go\n"); break;
default: printf("Invalid pedestrian input!\n");
}
break;

case 'Y':
case 'y':
printf("Get ready - Slow down\n");
break;

default:
printf("Invalid light color!\n");
}
return 0;
}