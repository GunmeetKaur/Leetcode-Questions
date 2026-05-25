class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        set<int>s(nums2.begin(),nums2.end());
        vector<int>result;
        for(int i=0;i<n;i++){
           if(s.count(nums1[i])){//it will chk for value i.e. is sme in s and nums1[i];
            result.push_back(nums1[i]);
            s.erase(nums1[i]);//for removing duplicates(just to be safe just in case nums1 have 2 sme elements that match with s again and again)
           }
        }
        return result;
    }
};
