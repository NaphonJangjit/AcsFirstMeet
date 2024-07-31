#include <stdio.h>
#include <stdlib.h>

int main(void){
	int* arr = (int*)malloc(sizeof(int) * 5);
    int sum = 0;
  	for(int i = 0; i < 5; i++){
      int tmp;
      scanf("%d", &tmp);
    	*(arr+i) = tmp;
        sum += tmp;
    }
    printf("Sum of entered numbers: %d\n", sum);
    printf("Numbers in array: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(arr+i));
    }
    free(arr);
}