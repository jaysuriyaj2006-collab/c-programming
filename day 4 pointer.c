#include<stdio.h>
int main(){
    int num=10;
    printf("%d\n",num);
    printf("%p",num);
    return 0;
}

#include<stdio.h>
int main(){
    int num=10;
    int *point=&num;
    printf("%d\n",num);
    //memory of num
    printf("%p\n",num);
    //memory of point
    printf("%p\n",point);
    printf("%d",*point);
    return 0;
}