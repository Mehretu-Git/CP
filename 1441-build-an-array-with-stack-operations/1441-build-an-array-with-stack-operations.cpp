class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>operations;
        vector<int> currentStack;
        int index = 0;
        int i = 1;
        while(currentStack != target){
            currentStack.push_back(i);
            if(target[index] == currentStack[index]){
                operations.push_back("Push");
                index++;
            }
            else{
                operations.push_back("Push");
                operations.push_back("Pop");
                currentStack.pop_back();
            }
            i++;
        }
        return operations;
    }
};