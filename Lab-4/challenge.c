#include <stdio.h>
 
int main() {
 
    int i = 0;
    int choice;
    float balance = 0.0;
    float amount = 0.0;
    do {
        i > 0;
    printf("======ATM MENU======\n");   
    printf("1.Check Balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.Exit\n");
    printf("Choose an option: "); 
    scanf("%d", &choice);
    if  (choice == 1) {
        printf("Current balance: %.2f\n", balance);
    }
    else if (choice == 2){
        printf("Enter amount to deposit: ");
        scanf("%f", &balance);
    } 
    else if (choice == 3){
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        printf("Withdrawal success\n");
        balance = balance - amount;

    } else if (choice == 4) {
        printf("Thankyou for using the ATM\n");
        break;

    }

}
        while(1);
        return 0;
    }