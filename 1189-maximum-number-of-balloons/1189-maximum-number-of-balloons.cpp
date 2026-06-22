class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> frequency;
        int balloons{};
        for(char c: text){
            frequency[c]++;
        }
        bool flag = true;
        while(flag){
            if(frequency['b'] < 1 || frequency['a'] < 1 ||
            frequency['l'] < 2 || frequency['o'] < 2 || 
            frequency['n'] < 1){
                flag = false;
                break;
            } 

            else{
                frequency['b'] -= 1;
                frequency['a'] -= 1;
                frequency['l'] -= 2;
                frequency['o'] -= 2;
                frequency['n'] -= 1;
                balloons ++;
            }
        }
        return balloons;
    }
};