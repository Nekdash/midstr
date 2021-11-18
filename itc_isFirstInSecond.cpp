#include "middle_str.h"


bool itc_isFirstInSecond(string s1, string s2){ // наоборот аргументы
    long long c = 0;
    for ( long long i = 0; i < itc_len(s2); i++){
        c = 0;
        if (s2[i] == s1[0]){
            for ( long long j = 0; j < itc_len(s1); j++){
                if( s2[i+ j] == s1[j] )
                    c++;
            }
        }   
    
    if(itc_len(s1) == c)
        return true;}
    return false;
}
