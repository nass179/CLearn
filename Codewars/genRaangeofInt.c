//  1) dynamically allocate memory for the return array
//  2) assign the size of this array to the pointer *sz

#include <stdlib.h>
#include <stdio.h>

int *generate_range(int min, int max, int step, size_t *sz) {
    int *intArr = malloc(sizeof(sz));
    for (int i = 0; i < max; ++i) {
        intArr[i] = min;
        min += step;
    }
    return intArr;//  <----  hajime!
}
int main(){
    int min = 1;
    int max = 10;
    int step = 1;
    size_t *sz = (size_t *) ((1 + max - min) / step * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        printf("%d", generate_range(min,max,step,sz)[i]);
    }


    return 0;
}