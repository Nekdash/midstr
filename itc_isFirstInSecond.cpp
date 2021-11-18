#include "middle_str.h"



bool itc_isFirstInSecond(string s2, string s1){ // наоборот аргументы
    long long res = -1;
    for ( int i = 0; i < itc_len(s1); i++){
        if (itc_slice_str(s1, i, i+itc_len(s2)-1) == s2){ // вырезка на длину искомой строки
            return true; // если тут - вернуть 1
            break;
        }
    }
    if ( res == -1)
        return false;
    return true;

}
