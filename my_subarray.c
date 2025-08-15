#include <stdio.h>
#include <stdlib.h>

void subarr(int* arr, int* tarr, int si, int ei){
  if (ei > 0 && si > 0 && ei > si){
    int j = 0;
    for (int i = si; i < ei; i++){
      tarr[j] = arr[i];
      j++;
    }
  } else {
    printf("please pass working indexes.");
    exit(1);
  }
}

