class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*n;
        int sumEven = n*(n+1);
        
        cout<<sumOdd<<" "<<sumEven<<endl;
        return gcd(sumOdd, sumEven);
    }
};