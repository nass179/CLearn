#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *hello(const char *name) {
    if(name == NULL) return "Hello, World";
    int len =(int) strlen(name);
    if(name[0] == '\0') return "Hello, World!";
    for (int i = 0; i < len; ++i) {
        if(!isalpha(name[i])) return "Hello, World!";
    }
    for (int i = 0; i < len; ++i) {
        if (isalpha(name[i])) {
            char *n = malloc(sizeof(name));
            sprintf(n, "%s", name);
            n[0] <<= 3;
            n[0] >>= 3;
            n[0] |= 0b01000000;
            for (int j = 1; j < len; ++j) {
                n[j] |= 0b01100000;
            }
            char *hello = malloc(7 * sizeof(char) + sizeof(n));
            sprintf(hello, "Hello, %s!", n);//  <----  hajime!
            return hello;
        }
    }
    return "Hello, World!";
}
int main(){
    char *name = "jHON";
    //free(name);
    printf("%s", hello(name));
}
