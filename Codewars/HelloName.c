#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *hello(const char *name) {
    int len =strlen(name);
    if((name != NULL) && (name[0] == '\0')) return "Hello, World!";
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
            for (int i = 1; i < len; ++i) {
                n[i] = name[i] | 0b01100000;
            }
            char *hello = malloc(12 * sizeof(char));
            sprintf(hello, "Hello, %s!", n);//  <----  hajime!
            return hello;
        }
    }
}
int main(){
    char *name;
    name = "jHON";
    printf("%s", hello(name));
}
