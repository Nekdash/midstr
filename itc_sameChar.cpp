#include "middle_str.h"

char itc_sameChar(string str){
    char ch = ' ';
    long long i = 0, len = itc_len(str), counter = 1;
    while(str[i] != '\0'){
        for (long long j = i + 1; str[j] != '\0'; j++){
        if (str[i] == str[j] && str[i] != 32)
            counter++;
        }
        if (counter == 2){
             ch = str[i];
             return ch;}
    counter = 1;
    i++;

    }
    return '1';
}
