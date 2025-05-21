#include <bits/stdc++.h>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
      map<char, int> romansValue = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
      map<char, int> romansCount = {
            {'I', 0},
            {'V', 0},
            {'X', 0},
            {'L', 0},
            {'C', 0},
            {'D', 0},
            {'M', 0}
        };
      
      int value = 0;
      bool sum = 1;
      
      int i = s.size() - 1;
      while(i >= 0){
        if(i < s.size() - 1 && s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')){
          sum = 0;
          
        }        
        if(i < s.size() - 1 && s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')){
          sum = 0;
          
        }

        if(i < s.size() - 1 && s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')){
          sum = 0;
          
        }
        
        if(sum){
          value += romansValue[s[i]];
        }else{
          value -= romansValue[s[i]];
        }
        sum = 1;
        i--;
      }
      return value;    
    }
};




int main(){
  Solution s;
  cout << s.romanToInt("LVIII");
  return 0;
}
