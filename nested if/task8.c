#include <stdio.h>

int main() {
int category, item;

printf("1 for Beverages, 2 for Main Course, 3 for Desserts\n");
printf("Enter category: ");
scanf("%d", &category);

switch(category) {
case 1:
printf("Beverages: 1 Tea (Rs 150), 2 Coffee (Rs 250), 3 Juice (Rs 200)\n");
printf("Enter item: ");
scanf("%d", &item);
switch(item) {
case 1: printf("Tea - Rs 150\n"); break;
case 2: printf("Coffee - Rs 250\n"); break;
case 3: printf("Juice - Rs 200\n"); break;
default: printf("Invalid item!\n");
}
break;

case 2:
printf("Main Course: 1 Biryani (Rs 500), 2 Karahi (Rs 800), 3 Burger (Rs 400)\n");
printf("Enter item: ");
scanf("%d", &item);
switch(item) {
case 1: printf("Biryani - Rs 500\n"); break;
case 2: printf("Karahi - Rs 800\n"); break;
case 3: printf("Burger - Rs 400\n"); break;
default: printf("Invalid item!\n");
}
break;

case 3:
printf("Desserts: 1 Ice Cream (Rs 200), 2 Cake (Rs 350), 3 Kheer (Rs 180)\n");
printf("Enter item: ");
scanf("%d", &item);
switch(item) {
case 1: printf("Ice Cream - Rs 200\n"); break;
case 2: printf("Cake - Rs 350\n"); break;
case 3: printf("Kheer - Rs 180\n"); break;
default: printf("Invalid item!\n");
}
break;

default:
printf("Invalid category!\n");
}
return 0;
}