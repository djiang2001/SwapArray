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
  int * p1 = arr;
  int * p2 = arr2;
  for(i = 9;i>=0; i--){
    *(p2 + i) = *(p1 + (9-i));
  }

    for(i = 0; i < 10; i++){
    printf("Array2 %d %d \n", i, arr2[i]);
  }
}

