#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
Write a simple regex to validate a username. Allowed characters are:

lowercase letters,
numbers,
underscore
Length should be between 4 and 16 characters (both included).
 */
bool validate_username (const char *username){
    if(16 < strlen(username) || strlen(username) < 4)return false;
    for (int i = 0; i < strlen(username); ++i) {
        if(islower(username[i])|| isdigit(username[i])|| username[i] == '_')continue;
        else return false;
    }
    return true;
}
int main(){
    const char *username = "hell_o";
    printf("%d", validate_username(username));
}