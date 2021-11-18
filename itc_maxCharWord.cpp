#include "middle_str.h"

bool word(string str){
    long long i = 0;
    bool bol = true;
    while(str[i] != '\0'){
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != 32)
            bol =  false;
        i++;
    }
    return bol;
}

string itc_maxCharWord(string str){
    string max = "", temp = "";
    long long len = 0, i = 0, start = 0;
    if (itc_find_str(str, " ") == -1)
        return "error";
    while(str[i] != '\0'){
        if (str[i] == 32){
            if (str[i - 1] != 32)
                temp = itc_slice_str(str, start, i - 1);
                len = itc_len(temp);
            if (temp[len - 1] < 65 || (temp[len - 1] > 90 && temp[len - 1] < 97) || temp[len - 1] > 122)
                temp = itc_slice_str(temp, 0, len - 2);
                len = itc_len(temp);
            if (len > itc_len(max) && word(temp) == 1)
                max = temp;
            start = i + 1;
            len = 0;
            temp = "";
            }
        i++;

    }

     temp = itc_slice_str(str, start, itc_len(str) - 1);
     len = itc_len(temp);
     if (len > itc_len(max) && word(temp) == 1){
         max = temp;
    }
    if (max == " ")
        return "error";
    return max;
    return "error";
}
