class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int mxi=nums[n-1];
        for(int i=mini;i>=1;i--){
            if(mini%i==0 && mxi%i==0){
                return i;
            }
        }
        return 1;
    }
};
