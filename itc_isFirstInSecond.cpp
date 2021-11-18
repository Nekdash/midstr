#include "middle_str.h"

long long itc_find_str(string str1, string str2){
    long long res = -1;
    for ( int i = 0; i < itc_len(str1); i++){
        if (itc_slice_str(str1, i, i+itc_len(str2)-1) == str2){
            res = i;
            break;
        }
    }
    return res;

}





bool itc_isFirstInSecond(string s1, string s2){
    long long res = itc_find_str(s2, s1);
    if ( res == -1)
        return false;
    

    
    return true;

}
