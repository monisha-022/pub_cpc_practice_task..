#include<stdio.h>
int main(){
    int option;
    float balance = 6000.00;
    float amount;
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your option: ");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("Your balance is: %.2f\n",balance);
    }
    else if(option == 2)
    {
        printf("Enter amount to deposit: ");
        scanf("%f",&amount);
        balance += amount;
        printf("Enter amount to Withdraw: ");
        scanf("%f",&amount);
        balance += amount;
        printf("New balance: %2f\n",balance);
    }
    else if(option == 3)
    {
        printf("Enter amount to Withdraw: ");
        scanf("%f",&amount);
        if (amount <= balance){
            balance -= amount;
            printf("New balance: %.2f\n",balance);
        }
    }
    else{
        printf("Invalid option!\n");
    }
    return 0;
}
