#include <stdio.h>
#include <stdlib.h>

#define LENGTH 1000
#define TEST 2

void insertion_sort(int* arr, int length){
  for (int i = 1; i < length; i++){
    int temp = arr[i]; // temp var for switching spots
    int j = i - 1;
    for (j = i - 1; j >= 0; j--){
      if (temp < arr[j]) {
        arr[j+1] = arr[j];
      } else break;
    }
      arr[j+1] = temp;

      }
    }

int main(){
  int arr[LENGTH];

  for (int i = 0; i < LENGTH; i++){
    arr[i] = rand();
  }
  
  int test_arr[TEST] = {2,1};

  printf("array before sorting is:\n");
  for (int i = 0; i < LENGTH; i++){
    printf("current is %d (before sort)\n", arr[i]);
  }
  
  insertion_sort(arr, LENGTH);

  printf("array after sorting is:\n");
  for (int i = 0; i < LENGTH; i++){
    printf("current is %d (after sort)\n", arr[i]);
  }
}
