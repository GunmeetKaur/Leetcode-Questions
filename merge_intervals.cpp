class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int prevStart=intervals[0][0];
        int prevEnd=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=prevEnd){
                prevEnd=max(prevEnd,intervals[i][1]);
                
            }
            //pehle jitne interval merge hote hei utne kro by updating prevEnd
            else{
                //pehla non overlapping aya mtlb bs abhi yhi tk merge hona tha toh push krdo
                ans.push_back({prevStart,prevEnd});
                prevStart=intervals[i][0];//update krdo start aur end k value
                prevEnd=intervals[i][1];
            }
        }
        ans.push_back({prevStart,prevEnd});//last interval push kro
        return ans;
    }
};
