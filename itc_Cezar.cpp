#include "middle_str.h"

string itc_Cezar(string str, int k){
    
    int temp = 0;
    string res = "";
    
    for ( long long i = 0; str[i] != '\0'; i++){
        
        if(k >= 0){
        if ((str[i] + k) > 'z'){
            temp = (str[i] + k) - 123;
            res += 'a' + temp;
        }
        else if ((str[i] + k) > 'Z' && (str[i] + k) < 'a'){
            temp = (str[i] + k) - 91;
            res += 'A' + temp;
        }
        else if((str[i] + k) > 'a'&& (str[i] + k) < 'z' || (str[i] + k) < 'Z' && (str[i] + k) > 'A')
            res += str[i] + k;

        else
            res += str[i];

        }

        else if (k < 0){
        if(str[i] < 'a'&& str[i] > 'Z' || str[i] > 'z' || str[i] < 'A')
            res += str[i];
        else if ((str[i] + k) < 'Z' && (str[i] + k) > 'A'){
            temp = 93 - ('A' - (str[i] + k));
            res += temp;
        }
        else if ((str[i] + k) < 'a'){
            temp = 123 - ('a' - (str[i] + k));
            res += temp;
        }
        
        else if((str[i] + k) >= 'a'&& (str[i] + k) < 'z' || (str[i] + k) < 'Z' && (str[i] + k) > 'A')
            res += (str[i] + k);


        }
    

}
return res;

}
