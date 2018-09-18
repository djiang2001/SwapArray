#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //First Array
  srand(time(NULL));
  int arr[10];
  int i;
  for(i = 0; i < 10;i++){
    arr[i] = rand();
  }
  arr[9] = 0;

  for(i = 0; i < 10; i++){
    printf("Array %d %d \n", i, arr[i]);
  }

  //Second Array
  int arr2[10];
  for(i = 9;i>=0; i--){
    *(arr2 + i) = *(arr + (9-i));
  }

    for(i = 0; i < 10; i++){
    printf("Array2 %d %d \n", i, arr2[i]);
  }
}

