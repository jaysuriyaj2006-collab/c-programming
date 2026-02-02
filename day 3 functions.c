#include<stdio.h>
void mynumber(int a,int b){
    printf("\nAddition:%d",a+b);
    printf("\nsubraction:%d",a-b);
    printf("\nmultiplication:%d",a*b);
    printf("\ndivision:%d",a/b);
    printf("\nmodulus:%d",a%b);
}
int main(){
    mynumber(4,2);
    return 0;
}