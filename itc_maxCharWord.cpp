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
    // amazing
    string max = "", temp = "";
    long long s = 0;
    int check = itc_find_str( str," ");
    if (check == -1)
        return "error";
    for ( long long i = 0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            if (str[i - 1] != ' ') // не пробелы подряд
                temp = itc_slice_str(str, s, i - 1);
                
            if (temp[itc_len(temp) - 1] < 'A' || (temp[itc_len(temp) - 1] > 'Z' && temp[itc_len(temp) - 1] < 'a') || temp[itc_len(temp) - 1] >'z')
                temp = itc_slice_str(temp, 0, itc_len(temp) - 2);
                
            if (itc_len(temp) > itc_len(max) && word(temp) == 1)
                max = temp;
            s = i + 1;
            
            temp = "";
            }
        

    }

     temp = itc_slice_str(str, s, itc_len(str) - 1);
     
     if (itc_len(temp) > itc_len(max) && word(temp)){
         max = temp;
    }
    if (max == " ")
        return "error";
    return max;
    return "error";
}
