class Solution {
public:
    int GCDOfTwo(int x, int y){
        if (y == 0) {
            return x; 
        }
        return GCDOfTwo(y, x % y); 
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*n;
        int sumEven = n*(n+1);
        
        cout<<sumOdd<<" "<<sumEven<<endl;
        return GCDOfTwo(sumOdd, sumEven);
    }
};