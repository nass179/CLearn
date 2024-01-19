#include <stdio.h>

int main(){
    int x = 2;
    x |= 0b00000001;
    printf("%d", x);
    return 0;
}