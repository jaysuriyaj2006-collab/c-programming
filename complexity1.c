#include<stdio.h>
int main(){
    int triggers=0;
    int n,i;
    printf("Enter number of sensor:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        triggers++;
    }
    printf("total triggers:%d\n",triggers);
    return 0;
}