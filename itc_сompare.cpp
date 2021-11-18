#include "middle_str.h"

bool itc_compare(string s1, string s2){
    for (long long i = 0; i <= itc_len(s1); i++) {
        if (s1[i] != s2[i]) {
            return false;
            break;
        }

    }
    return true;
}
