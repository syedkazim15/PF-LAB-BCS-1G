 #include <stdio.h>
 int main()
 {
     int W , X , Y , Z;

    printf("Enter W:\n");
    scanf("%d" , &W);
    printf("Enter X:\n"); 
    scanf("%d" , &X);
    printf("Enter Y:\n");
    scanf("%d" , &Y);
    printf("Enter Z:\n");
    scanf("%d" , &Z);

    if( W > X ){
        if( W > Y ){
            if( W > Z ){
                printf("W is greatest \n");
            }
        }
    }
    else if( X > Y ){
        if( X > Z ){
            printf("X is greatest \n");
        }
    }
    else if( Y > Z ){
        printf("Y is greatest \n");
    }
    else
    {
        printf("Z is greatest \n");
    }
    return 0;
}