#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0
int main(void) {
    while(true){
        int n;
        printf("Enter Number: ");
        scanf("%d", &n);
        if(n > 0) continue;
        else break;
    }
}