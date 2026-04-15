class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = static_cast<int>(size(words));
        int left = (startIndex-1)%n;
        int right = (startIndex+1)%n;
        if(target == words[startIndex]) return 0;
        int iterator = 1;
        while(true){
            if(words[right]==target || words[left>=0?left:n+left]==target) return iterator;
            if(right == left) break;
            iterator++;
            left = (left-1+n)%n;
            right = (right+1)%n;
        }
        return -1;
    }
};