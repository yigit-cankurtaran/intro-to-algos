#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define LENGTH 10


// void msort(int* arr, int start, int end){
//   if 

  
// }

void rand_nums(int* arr, int len){
  for (int i = 0; i < len; i++){
    arr[i] = rand();
  }
}

int main(){
  int test[LENGTH];
  int retard[5];
  rand_nums(test, LENGTH);

  subarr(test, retard, 1, 4);

  for (int i = 0; i < LENGTH; i++){
    printf("num %d before sort is %d\n", i, test[i]);
  }
  for (int i = 0; i < sizeof(retard) / sizeof(int); i++){
    printf("num %d in subarray is %d\n", i, retard[i]);
  }

  // msort(test, LENGTH);
}
