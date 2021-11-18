#include "middle_str.h"



bool itc_isFirstInSecond(string s2, string s1){ // наоборот аргументы
    long long c = 0;
    for ( long long i = 0; i < itc_len(s1); i++){
        c = 0;
        if (s1[i] == s2[0]){
            for ( long long j = 0; j < itc_len(s2); j++){
                if( s2[j] == s1[j+i] )
                    c++;
            }
        }   
    }
    if(itc_len(s2) == c)
        return true;
    return false;
}
