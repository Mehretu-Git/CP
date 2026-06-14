class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int pointer = n;
        while(pointer < 2*n){
            result.push_back(nums[pointer-n]);
            result.push_back(nums[pointer]);
            pointer++;
        }
        return result;
    }
};