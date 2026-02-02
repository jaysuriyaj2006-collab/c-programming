#include<stdio.h>
int main(){
    int n;
    printf("enter the number of people:");
    scanf("%d",&n);
    int age[n],sum=0;
    float average;
    for(int i=0;i<n;i++){
    printf("Age of person %d:",i);
    scanf("%d",&age[i]);
    }
    for(int i=0;i<n;i++){
    sum=sum+age[i];
    
    }
    average=sum/n;
    printf("%d",average);
    return 0;
}