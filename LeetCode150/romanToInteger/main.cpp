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
      
      int value = 0;
      for(int i = s.size() - 1; i >= 0; i--){
        cout << romansValue[s[i]] << '\n';
        value += romansValue[s[i]];
      }

      return value;    
    }
};




int main(){
  Solution s;
  cout << s.romanToInt("LVIII");
  return 0;
}
