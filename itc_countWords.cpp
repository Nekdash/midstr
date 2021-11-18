#include "middle_str.h"

int itc_countWords(string str){
    int c = 0;
    long long i = 0;
    bool check = true;
    while(str[i] != '\0'){
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != 32){
            check = false;
        }
        if(str[i] == 32 && check == true)
            c += 1;
        if(str[i] == 32 && check == false){
            check = true;}
        i++;
    }
    if(check == false)
        return c;
    c++;
    return c;
}
