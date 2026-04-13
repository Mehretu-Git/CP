class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min_distance = 1001;
        for(int i{};i<size(nums);++i){
            if(nums[i] == target)
                if(min_distance > abs(i-start)) 
                    min_distance = abs(i-start);
        }
        return min_distance;
    }
};