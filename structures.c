#include <stdio.h>
#include<string.h>
struct student{
    int rollno;
    float marks;
    char name[10];
};
int main(){
    struct student std1;
    std1.rollno=22;
    std1.marks=49.5;
    strcpy(std1.name,"suriya");
    printf("roll.no=%d\n",std1.rollno);
    printf("marks=%f\n",std1.marks);
    printf("name=%s",std1.name);
    return 0;
}