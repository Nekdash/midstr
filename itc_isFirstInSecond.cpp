#include "middle_str.h"
bool itc_isFirstInSecond(string str2, string str1){
    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    long long count = 0;
    if(str2 == "")
        return true;
    for (long long i = 0; i < len1; i++){
        count = 0;
        if (str1[i] == str2[0]){
        for (long long j = 0; j < len2; j++){
            if (str1[i + j] == str2[j]){
                count += 1;
            }
        }
        }
        if (count == len2){
            return true;
        }
    }
    return false;
}
