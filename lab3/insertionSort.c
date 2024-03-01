#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last) {
    int i, j, temp_var;
    for (i = first; i <= last; i++) {
        temp_var = array[i];
        for (j = i - 1; j >= 0 && (myCompare(array[j], temp_var) > 0); j--) {
            mySwap(&array[j + 1], &array[j]);
        }
        myCopy(&temp_var, &array[j + 1]);
    }
}
