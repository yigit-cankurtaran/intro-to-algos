#include <stdlib.h>
#include <time.h>
#include "rand_nums.h"

void rand_nums(int* arr, int len){
    srand(time(NULL));
    for (int i = 0; i < len; i++){
        arr[i] = rand();
    }
}
