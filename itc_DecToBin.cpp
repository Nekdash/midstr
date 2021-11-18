#include "middle_str.h"


string itc_num_to_str(long long num){
    char ch = ' ';
    string str = "", res = "";
    while(num > 0){
        ch = (num % 10) + 48;
        str =  ch + str;
        num /= 10;
    }

    return str;
}

string itc_DecToBin(string str){
    string temp = "", temp2 = "";
    long long temp_num = 0;
    for( long long i = 0; str[i] != '\0'; i++ ){
        if ( str[i] < '0' || str[i] > '9'){
            temp2 += itc_decToBase(str_to_num(temp), 2) + str[i];
            temp = "";
            }
        if ( itc_isDigit(str[i])){
            temp += str[i];
        }
        
    }

    temp2 += itc_decToBase(str_to_num(temp), 2);
    return temp2;
}


