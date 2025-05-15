#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int repeats = 0;
        int lastUnique = -999;
        for(int i = 0; i < nums.size(); i++){
          if(nums[i] != lastUnique){
            lastUnique = nums[i];
            nums[k] = nums[i];
            k++;
            repeats = 1;
          }else{
            if (repeats < 2){
              nums[k] = nums[i];
              k++;
              repeats++;
            }
          }
        }
    }
};







int main(){
  return 0;
}
