#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*
 Create a function that converts US dollars (USD) to Chinese Yuan (CNY) .
 The input is the amount of USD as an integer, and the output should be a string that states the amount of Yuan followed by 'Chinese Yuan'

Examples (Input -> Output)
15  -> '101.25 Chinese Yuan'
465 -> '3138.75 Chinese Yuan'
The conversion rate you should use is 6.75 CNY for every 1 USD.
 All numbers should be represented as a string with 2 decimal places. (e.g. "21.00" NOT "21.0" or "21")
 */
char *USD_to_CNY (long dollars, char *yuans){
    double y = dollars * 6.75;

    *yuans = 's'; // write to yuans
    return yuans;
}
int main(){
    long dollars = 1;
    char *yuans= malloc(12 * sizeof(char));
    printf("%s", USD_to_CNY(dollars, yuans));
}