#include<stdio.h>
int main(){
    int code,quantity;float price;
    scanf("%d %d",&code,&quantity);
    if (code == 1){
        price = 4.00 * quantity;
    }
    else if(code == 2){
        price = 4.50 * quantity;
    }
    else if(code == 3){
        price = 5.00 * quantity;
    }
    else if(code == 4){
        price = 2.00 * quantity;
    }
    else if(code == 5){
        price = 1.50 * quantity;
    }
    printf("Total: R$ %.2f\n",price);
    return 0;
}
