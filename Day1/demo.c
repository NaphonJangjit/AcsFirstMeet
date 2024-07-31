#include <stdio.h>
#include <stdlib.h>
void sort(int arr[]);
void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main(void){
	int arr[10];
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
  }
  sort(arr);
  printf("Array after sorting :\n");
  for(int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }

}

void sort(int arr[]){
  int size = 10;
  for(int i = 0; i < size; i++){
    int maxPos = i;
    for(int j = i+1; j < size; j++){
      if( arr[j] > arr[maxPos])
        maxPos = j;
      

      
    }
    swap(&arr[i], &arr[maxPos]);
  }
}