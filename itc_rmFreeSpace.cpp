#include "middle_str.h"

string itc_rmFreeSpace(string str){
    string res = "";
    for ( long long i = 0; str[i] != '\0'; i++) {
        if((str[i] == ' ' && str[i - 1] != ' ') || str[i] != ' ')
            res += str[i]; // все нужное - оставляем
        
    }
    if (res[0] == ' ') // first space
    res = itc_slice_str(res, 1 , itc_len(res) - 1);

    if((res[itc_len(res) - 1]) == ' ') // last space
        
        res = itc_slice_str(res, 0 , itc_len(res) - 2);

    return res;
}

