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
void pop(int value){
    if(top==size-1){
        printf("no space left\n");
    }
    else{
        top--;
        array[top]=value;
        printf("%d value can be poped\n",value);
    }
}
void peak(){
    if(top==-1){
        printf("No value at stack");
    }
    else{
        printf("The peak value is :%d\n",array[top]);
    }
}
void isempty(){
    if(top==-1){
        printf("No value at stack\n");
    }
    else{
        printf("stack has items\n");
    }
}
void Size(){
    printf("my stack size is %zu \n",top+1);
}

int main(){
    push(10);
    push(20);
    pop(20);
    isempty();
    Size();
    return 0;
}