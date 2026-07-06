class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });
        stack<int> stack;
        stack.push(intervals[0][1]);
        for(int i{1}; i < intervals.size(); i++){
            if(stack.top() < intervals[i][1]) stack.push(intervals[i][1]);
        }
        return stack.size();
    }
};