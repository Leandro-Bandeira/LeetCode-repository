#include <iostream>
#include <string>

using namespace std;

class Solution{
  public:
    string mergeAlternately(string word1, string word2){
      string mergedWord = "";
      int mergedWordSize = word1.size() + word2.size();

      for(int i = 0; i < mergedWordSize; i++){
        mergedWord.push_back('a');
      }

      int k = 0;
      for(int i = 1; i < mergedWordSize; i+=2){
        if(k < word1.size()){
          mergedWord[i-1] = word1[k];
        }
        if(k < word2.size()){
          mergedWord[i] = word2[k];
        }
        k++;
      }

      return mergedWord;
    }
};



int main(){

  Solution sol;
  cout << sol.mergeAlternately("abc", "pqr") << "\n";
  return 0;
}
