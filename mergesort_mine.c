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
  rand_nums(test, LENGTH);

  for (int i = 0; i < LENGTH; i++){
    printf("num %d before sort is %d\n", i, test[i]);
  }
  // msort(test, LENGTH);
}
