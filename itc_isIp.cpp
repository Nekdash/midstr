#include "middle_str.h"

bool itc_isIp(string str){

    long long counter = 0;
    string res = "";

    if(str[itc_len(str) - 1] == '.' || itc_len(str) > 15 )
        return false;
    for (long long i = 0; str[i] != '\0'; i++){
        if (str[i] == '.'){
            if (str[i - 1] == '.')
                return false;
            if (str_to_num(res) > 255)
                return false;
            res = "";
            counter = 0;
        }
        if( !itc_isDigit(str[i]) && str[i] != '.')
            return false;
        
        if(str[i] != '.'){
            res += str[i];
            counter++;}
        
        if (counter > 3)
            return false;
        
    }
    return true;

}

long long str_to_num(string temp){
    int ch = 0;
    long long temp_num = 0;
    for ( long long i = 0; temp[i] != '\0'; i++){
                ch = temp[i] - 48;
                temp_num = temp_num * 10 + ch;
    }
    return temp_num;
}

