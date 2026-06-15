class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentStreak{}; int maxStreak{};
        for(int num: nums){
            if(num==1){
                currentStreak++;
                maxStreak = currentStreak>maxStreak?currentStreak:maxStreak;
            }
            else 
                currentStreak = 0;
        }
        return maxStreak;
    }
};