#include <stdio.h>
int main()
{
    int units , perUnit , Bill;
    char connection;
    

    printf("Enter units consumed: \n");
    scanf("%d" , &units);
    printf("Enter connection type C or D: \n");
    scanf(" %c" , &connection);

    if( connection == 'C' ){
        if( units > 0 && units <= 100){
        perUnit = 150;
        }
        else if( units > 100 && units <= 300){
        perUnit = 200;
        }
        else{
         perUnit = 300;
        }
                            }

     else if( connection == 'D' ){
        if( units > 0 && units <= 100){
        perUnit = 200;
        }
        else if( units > 100 && units <= 300){
        perUnit = 300;
        }
        else{
         perUnit = 400;
        }
                            }

        Bill = perUnit * units;

        printf("Your Bill is: %d \n" , Bill);
        return 0;
    } 