class Solution {
public:
    int digitProduct(int n){
        if(n<10) return n;
        int x = n/10;
        int y = n%10;
        int xy = (n*n - y*y - 100*x*x)/20;
        return xy;
    }
    int smallestNumber(int n, int t) {
        //small constraints => brute force
        while(digitProduct(n)%t != 0){
            n++;
        }
        return n;
    }
};