#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
char *hello(const char *name) {
    if(name == NULL) return "Hello, World";//nullpointer
    int len =(int) strlen(name);
    if(name[0] == '\0') return "Hello, World!";
    for (int i = 0; i < len; ++i) {// check for chars that are not in the alphabet
        if(!isalpha(name[i])) return "Hello, World!";
    }
    char *n = (char*) malloc(len * sizeof(char));
    strcpy(n, name);
    for (int i = 0; i < len; ++i) {
        if (isalpha(name[i])) {
            //strcpy(n, name);
            //sprintf(n, "%s", name);
            n[0] <<= 3;
            n[0] >>= 3;
            n[0] |= 0b01000000;
            for (int j = 1; j < len; ++j) {
                n[j] |= 0b01100000;
            }
            char *hello = malloc(7 * sizeof(char) + len * sizeof(char));
            strcpy(hello, "Hello, ");
            strcat(hello, n);
            strcat(hello, "!");
            //sprintf(hello, "Hello, %s!", n);//  <----  hajime!
            return free(n), hello;
        }
    }
    return "Hello, World!";
}*/
//Does Work
char *hello(const char *name) {
    int len = (int) strlen(name);
    unsigned char *str; //= malloc(sizeof(char));
    strcpy(str, "Hello, ");
    if (len){
        strcat(str, name);
        str[7] <<= 3;
        str[7] >>= 3;//logical shift only works with unsigned
        str[7] |= 0b01000000;
        for (int i = 1; i < len; i++) {
            str[i + 7] |= 0b01100000;
        }
        strcat(str, "!");
    }
    else strcat(str, "World!");
    return str;
}
int main(){
    char *name = "wAYN";
    //free(name);
    printf("%s", hello(name));
    return 0;
}
