#include<stdio.h>                                                      
int main(){
    int choice;
    printf("\n1.tamil");
    printf("\n2.english");
    printf("\n3.hindi");
    printf("\nselect your language:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("you selected tamil");
        break;
        case 2:
        printf("you selected english");
        break;
        case 3: 
        printf("you selected hindi");
        break;
        default:
        printf("invalid choice");
             
    }
    return 0;
}

#include<stdio.h>
int main(){
    int amount=1000;
    int num;
    printf("Enter amount to withdraw:");
    scanf("%d",&num);
    if(amount>=num){
       printf("withdraw successfull");
    }
    else{
       printf("insufficient balance");
    }
    int balance;
    balance=amount-num;
    printf("\nbalance after withdraw:%d",balance);
    return 0;
}



