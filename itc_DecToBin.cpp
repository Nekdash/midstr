#include "middle_str.h"


string itc_num_to_str(long long num){
    char ch = '#';
    string str = "", res = "";
    while(num > 0){
        ch = (num % 10) + 48;
        str =  ch + str;
        num /=10;
    }

    return str;
}

string itc_DecToBin(string str){

    long long i =0, temp_num = 0 ,num = 0;
    string temp = "", temp2 = "";



    while (str[i] != '\0'){
        if ( str[i] < '0' || str[i] > '9'){
            num = str_to_num(temp);
            temp2 += itc_decToBase(num, 2) + str[i];
            temp = "";
            }
            if ( itc_isDigit(str[i])){
                temp += str[i];
            }
        i++;
    }
    num = str_to_num(temp);
    temp2 += itc_decToBase(num, 2);
    return temp2;
}


