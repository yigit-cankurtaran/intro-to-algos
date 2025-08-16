#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "rand_nums.h"

#define LENGTH 10

// void msort(int* arr, int p, int q, int r){
// // p<=q<r
//   if 

  
// }


int main(){
  int test[LENGTH];
  rand_nums(test, LENGTH-1);
  test[LENGTH - 1] = INT_MAX;
  
  for (int i = 0; i < LENGTH; i++){
    printf("num %d before sort is %d\n", i, test[i]);
  }
  // msort(test, );
}
