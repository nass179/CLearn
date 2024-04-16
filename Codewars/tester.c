#include <stdio.h>
int main(){
    int mark;
    printf("%s","Enter mark!");
    scanf("%d", &mark);
    if(mark>=90)printf("A");
    if(90>mark && mark>=80)printf("B");
    if(80>mark && mark>=70)printf("C");
    if(70>mark && mark>=60)printf("D");
    if(mark<60)printf("F");
    return 0;
}