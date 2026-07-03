/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> queue;
        
        if (!root) return result;
         
        queue.push(root);
        while(!queue.empty()){
            vector<int> current_level_values;
            int level_size = queue.size();
            while(level_size){
                TreeNode* current_node = queue.front();
                queue.pop();
                current_level_values.push_back(current_node->val);
                if(current_node->left) queue.push(current_node->left);
                if(current_node->right) queue.push(current_node->right);
                level_size--;
            }
            result.push_back(current_level_values);
        }
        return result;
    }
};