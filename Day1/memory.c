#include <stdio.h>
#include <math.h>
int main(){
    int size = 5;
    /*
         *
        ***
       *****
      *******
     *********
    */
   for(int i = 0; i < size; i++){
    for(int j = 0; j < size-fabs(i)-1; j++){
        printf(" ");
    }
    for(int j = 0; j < fabs(i)*2+1; j++){
        printf("*");
    }
    printf("\n");
   }
   for(int i = size-2; i >= 0; i--){
    for(int j = 0; j < size-i-1; j++){
        printf(" ");
    }
    for(int j = 0; j < i*2+1; j++){
        printf("*");
    }
    printf("\n");
   }
    return 0;
}