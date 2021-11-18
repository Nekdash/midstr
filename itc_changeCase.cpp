#include "middle_str.h"

unsigned char itc_changeCase(unsigned char c){
    if ( c <= 'z' && c >= 'a'){
        return c - ' ';
    }else if(c <= 'Z' && c >= 'A'){
        return c + ' ';
    }
    else{
        return c;
    }
}
