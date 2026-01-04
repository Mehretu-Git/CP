class Solution {
public:
    bool isHappy(int n) {
        set<int>squares;
        bool ans{true};
        while(true){
            int sum_of_squares{};
            int temp = n;
            while(temp>0){
                sum_of_squares += (temp%10)*(temp%10);
                temp = static_cast<int>(temp/10);
            }
            if(sum_of_squares==1) return ans;
            if(squares.count(sum_of_squares)) {
                ans = false;
                break;
            }
            squares.insert(sum_of_squares);
            n = sum_of_squares;
        }
        return ans;

    }
};