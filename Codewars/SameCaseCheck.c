/*
If either of the characters is not a letter, return -1
If both characters are the same case, return 1
If both characters are letters, but not the same case, return 0
Examples
'a' and 'g' returns 1

'A' and 'C' returns 1

'b' and 'G' returns 0

'B' and 'g' returns 0

'0' and '?' returns -1
 */
#include <stdio.h>
#include <ctype.h>
int same_case (char a, char b){
    if((isupper(a) && isupper(b) || (islower(a) && islower(b))))return 1;
    if((islower(a)&& isupper(b))||(isupper(a)&& islower(b))) return 0;
    return -1;

}
int main(){
    printf("%d",same_case('A', 'b'));
}
//isAlpha checks if it is in the alphabet or not its possible to use this also