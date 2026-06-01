class Solution {
public:
    int arrangeCoins(int n) {
        int stairs = 0;
        int subtrahend = 1;
        while(n >= subtrahend){
            n -= subtrahend;
            subtrahend++;
            stairs++;
        }
        return stairs;
    }
};