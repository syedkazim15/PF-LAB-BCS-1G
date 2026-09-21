#include <stdio.h>
int main(){
    int accType, trans;
    float amount=10000, dep, with;

    printf("Choose Account: 1 Savings, 2 Current: ");
    scanf("%d", &accType);

    switch(accType){
        case 1:
            printf("Savings - 1 Deposit 2 Withdraw 3 Balance: ");
            scanf("%d",&trans);
            switch(trans){
                case 1: 
                    printf("Enter deposit: ");
                    scanf("%f",&dep); 
                    printf("New Balance = %.2f\n", amount+dep); 
                    break;
                case 2: 
                    printf("Enter withdraw: ");
                    scanf("%f",&with);
                    if(with<=amount) printf("New Balance = %.2f\n", amount-with);
                    else printf("Insufficient!\n");
                    break;
                case 3: 
                    printf("Balance = %.2f\n", amount); 
                    break;
                default: printf("Invalid transaction!\n");
            }
            break;

        case 2:
            printf("Current - 1 Deposit 2 Withdraw 3 Balance: ");
            scanf("%d",&trans);
            switch(trans){
                case 1: 
                    printf("Enter deposit: ");
                    scanf("%f",&dep); 
                    printf("New Balance = %.2f\n", amount+dep); 
                    break;
                case 2: 
                    printf("Enter withdraw: ");
                    scanf("%f",&with);
                    if(with<=amount) printf("New Balance = %.2f\n", amount-with);
                    else printf("Insufficient!\n");
                    break;
                case 3: 
                    printf("Balance = %.2f\n", amount); 
                    break;
                default: printf("Invalid transaction!\n");
            }
            break;

        default: 
            printf("Invalid account type!\n");
    }
    return 0;
}