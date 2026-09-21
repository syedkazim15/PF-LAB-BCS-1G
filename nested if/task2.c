#include <stdio.h>
int main()
{
    int age; 
    char day;

    printf("Enter age: \n");
    scanf("%d" , &age);

    printf("Enter Day W/H: \n");
    scanf(" %c" , &day);

    if( age < 12 || age > 60 ){
        printf("Applying a discount \n");
        if( day == 'H' ){
        printf("Applying weekend discount \n");
            }
        }    
        else{
        if( day == 'W' ){
            printf("Applying weekday discount \n");
            }
        }
        
    

    if( age > 12 && age < 60 ){
        printf("Applying a discount \n");
        if( day == 'H' ){
            printf("Applying weekend discount \n");
        }
    }
        else {
            if( day == 'W' ){
            printf("Applying weekday discount");
        }
    }
    

    printf("Final Ticket price \n");
    return 0;

}