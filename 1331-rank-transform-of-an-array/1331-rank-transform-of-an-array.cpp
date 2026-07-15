class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        set<int> nums(arr.begin(), arr.end());
        map<int,int> arrToRank;
        
        int i{1};
        for(const auto& num: nums){
            arrToRank[num] = i;
            i++;
        }
        for(int& a: arr){
            ans.push_back(arrToRank[a]);
        }
        return ans;
    }
};