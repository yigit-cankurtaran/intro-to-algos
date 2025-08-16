#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "rand_nums.h"

#define LENGTH 10

void msort(int* arr, int p, int q, int r){
// p<=q<r
// p = start index of the section
// q = end index of the left half
// r = end index of the entire section

  if (p > q || q >= r){
    printf("values passed into merge sort are incompatible.\n");
    exit(2);
  }

  int n1 = q - p + 1;
  int n2 = r - q;
  int* la = (int*) malloc((n1+1) * sizeof(int)); // left half
  int* ra = (int*) malloc((n2+1) * sizeof(int)); // right half

  for (int i = 0; i < n1; i++){ // filling left array
    la[i] = arr[p + i];
    printf("%d of la currently %d", i, la[i]);
  }

  for (int j = 0; j < n2; j++){ // filling right array
    ra[j] = arr[q + 1 + j];
    printf("%d of ra currently %d", j, ra[j]);
  }

  la[n1] = INT_MAX; // sentinel values
  ra[n2] = INT_MAX;

  int i = 0; // starting indices
  int j = 0;

  for(int k = p; k < r; k++){ // merging arrays
    if (la[i] <= ra[j]){
      arr[k] = la[i];
      i++;
    } else{
      arr[k] = ra[j];
      j++;
    }
  }

  free(la); // freeing after use
  free(ra);
}


int main(){
  int test[LENGTH];
  rand_nums(test, LENGTH);
  
  for (int i = 0; i < LENGTH; i++){
    printf("num %d before sort is %d\n", i, test[i]);
  }
}
