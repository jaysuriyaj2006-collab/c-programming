#include<stdio.h>
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    printf("Enter numbers to swap:");
    scanf("%d %d",&x,&y);
    printf("before swapping:%d %d",x,y);
    swap(&x,&y);
    printf("\nafter swapping:%d %d",x,y);
    return 0;
}