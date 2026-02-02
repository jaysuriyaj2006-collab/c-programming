#include<stdio.h>
#define size 5
int array[size];
int top=-1;
void push(int value){
    if(top==size-1){
        printf("no space left\n");
    }
    else{
        top++;
        array[top]=value;
        printf("%d value pushed to array\n",value);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    return 0;
}