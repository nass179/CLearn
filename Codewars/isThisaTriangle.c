#include <stdio.h>
#include <stdbool.h>

bool is_triangle(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0){return false;}
    if(a > b && a > c && b+c > a){return true;}
    if(b > a && b > c && a+c > b){return true;}
    if(c > a && c > b && a+b > c){return true;}
    if(a > b && a == c && b+c > a){return true;}
    if(b > a && b == c && a+c > b){return true;}
    if(c > a && c == b && a+b > c){return true;}
    if(a == b && b == c){return true;}
    return false;
}
int main(){
    printf("%d", is_triangle(1,2,2));

    return 0;
}