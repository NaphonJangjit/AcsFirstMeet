#include <stdio.h>

int main(void){
	int arr[10] = {};
  	size_t size = sizeof(arr)/sizeof(arr[0]);
  	for(int i = 0; i < size; i++){
    	scanf("%d", &arr[i]);
    }
  	int fequency[10] = {};
  	for(int i = 0; i < size; i++){
    	for(int j = 0; j < size; j++){
        	if(arr[i] == arr[j]){
            	fequency[i]++;	
            }
        }
    }
  	int maxIndex = 0;
  	for(int i = 0; i < size; i++){
    	if(fequency[i] > maxIndex){
        	maxIndex = i;
        }
    }
  	
  	printf("Mode = %d", arr[maxIndex]);
  	
}