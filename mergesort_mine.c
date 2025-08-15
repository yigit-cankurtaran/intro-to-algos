#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "rand_nums.h"

#define LENGTH 10

// void msort(int* arr, int start, int end){
//   if 

  
// }


int main(){
  int test[LENGTH];
  rand_nums(test, LENGTH);

  for (int i = 0; i < LENGTH; i++){
    printf("num %d before sort is %d\n", i, test[i]);
  }
  // msort(test, );
}
