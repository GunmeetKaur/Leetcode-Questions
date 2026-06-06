class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0,maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else if((nums[i]==0 && k>0)||(nums[i]==1 && k<0)){
                k--;
                count++;
            maxcount=max(count,maxcount);
            }
            else{
                count=0;
            }
        }
        return maxcount;
    }
};
