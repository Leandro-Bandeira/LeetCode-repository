class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        int cnt=0;
        
        for(auto num:nums){
            if(cnt==0){
                ans=num;
            }
            if(num==ans){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ans;
    }
};

