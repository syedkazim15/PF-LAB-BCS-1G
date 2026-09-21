#include <stdio.h>
int main()
{
    int a , b , c;
    printf("Enter a , b , c : \n");
    scanf("%d"  "%d"  "%d" , &a , &b , &c);
    if( a + b > c || b + c > a || a + c > b ){
        if( a == b && b == c && a == c )
        {
            printf("Equilateral Triangle \n");
        }
        else if( a == b && a != c || b == c && b != a || a == c && a != b )
        {
            printf("Isosceles Triangle \n");
        }
        else{ 
        printf("Scalene Triangle \n");
            }
                                            }
        else{
            printf("invalid Triangle \n");
        }
        return 0;
    }