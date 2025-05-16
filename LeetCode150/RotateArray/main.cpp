#include <iostream>
#include <vector>
#include <pair>
using namespace std;

class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // garante que não giramos mais do que o necessário
    int elements_changed = 0;

    for (int start = 0; elements_changed < n; ++start) {
        int current = start;
        int prev = nums[start];

        do {
            int next = (current + k) % n;
            int temp = nums[next];
            nums[next] = prev;
            prev = temp;
            current = next;
            elements_changed++;
        } while (start != current); // fecha o ciclo
    }
  }

};



int main(){
  Solution sol;
  vector<int> test = {-1, -100, 3, 99};
  int k  = 2;
  sol.rotate(test, k);
  return 0;
}

