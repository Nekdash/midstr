#include "middle_str.h"



bool itc_isFirstInSecond(string s2, string s1){ // наоборот аргументы
    long long res = -1;
    for ( int i = 0; i < itc_len(str1); i++){
        if (itc_slice_str(s1, i, i+itc_len(s2)-1) == s2){
            return true;
            break;
        }
    }
    if ( res == -1)
        return false;
    return true;

}
