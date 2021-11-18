#include "middle_str.h"

int itc_countWords(string str){
    int c = 0;
    bool check = true;
    for( long long i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != ' '){
            check = false;
        }
        if(str[i] == ' ' && check == true)
            c += 1;
        if(str[i] == ' ' && check == false)
            check = true;
        
    }
    if(check == false)
        return c;
    c++;
    return c;
}
