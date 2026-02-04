#include <stdio.h>
#define size 5

int array[size];
int top = -1;
int bottom = -1;
//enqueue
void enqueue(int value){
    if(bottom == size -1){
        printf("No space in queue \n");
    }
    else{
        if(top==-1){
            top =0;
        }
        bottom++;
        array[bottom] = value;
        printf("Customers arrive:%d\n",value);
    }
}
void dequeue(){
    if(top == -1||top>bottom){
        printf("No data in queue \n");
    }
    else{
        printf("Customer served:%d\n",array[top]);
        top++;
    }
}
void front(){
    if(top == -1||top>bottom){
        printf("No data in queue \n");
    }
    else{
        printf("Display the elements:",array[top]);
        
    }
}
void isempty(){
    if(top == -1||top>bottom){
        printf("No data in queue \n");
    }
    else{
        printf("the queue has value \n");
    }
}
int main() {
enqueue(101);
enqueue(102);
enqueue(103);
dequeue(101);

isempty();
    return 0;
}