#include <stdio.h>

float calculate(int income);

int main(void){
    int income;
    scanf("%d", &income);
    float owed =calculate(income);
    
    printf("%.2f", owed);
}

float calculate(int income){
    float sum = 0;
    if(income > 100000){
        float res = income - 100000;
        sum += res * 0.2;
        sum += calculate(100000);
    }else if(income > 30000){
        float res = income - 30000;
        sum += res * 0.1;
        sum += calculate(30000);
    }else {
        sum += income * 0.05;
    }

    return sum;
}