#include "middle_str.h"

string itc_rmFreeSpace(string str){
long long i = 0;
    string res = "";
    while(str[i] != '\0'){
        if((str[i] == 32 && str[i - 1] != 32) || str[i] < 32 || str[i] > 32)
            res += str[i];
        i++;
    }
    if (res[0] == 32)
    res = itc_slice_str(res, 1 , itc_len(res) - 1);

    if((res[itc_len(res) - 1]) == 32)
        res = itc_slice_str(res, 0 , itc_len(res) - 2);

    return res;
}

