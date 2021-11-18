#include "middle_str.h"
bool itc_isFirstInSecond(string s2, string s1){
  
  int n1 = itc_len(s1);
  int n2 = itc_len(s2);

  if (n1 < n2)return false;

  for (int i = 0; i < n1-n2+1; i++){
    bool check = false;
    if (s1[i] == s2[0]) {
      check = true;
      for (int j = 1; j < n2; j++)
        if (s1[i + j] != s2[j])check = false;
    }

    if (check)return true;
  }
  return false;
}
