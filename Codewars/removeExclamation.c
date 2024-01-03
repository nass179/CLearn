#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *remove_marks (const char *str_in, char *str_out){
    int len, counter;
    strcpy(str_out, str_in);
    len = (int)strlen(str_in);
    counter = 0;
    for (int i = 0; i < len; ++i) {
        if(str_in[i] == '!') counter++;
        else counter = 0;
    }
    str_out[len - counter] = '\0';
    return str_out;
}
int main(){
    const char *str_in = "!Hi!!";
    char *str_out = malloc(strlen(str_in));
    printf("%s",remove_marks(str_in, str_out));
    return 0;
}