#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of readings: ");
    scanf("%d", &n);

    int temp[n];   // O(n) space

    printf("Enter temperature readings:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
    }

    printf("Temperature readings are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
