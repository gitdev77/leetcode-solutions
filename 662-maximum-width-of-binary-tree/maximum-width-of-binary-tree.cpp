class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        unsigned long long maxWidth = 0;
        // Queue stores pair of: {node, index}
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int size = q.size();
            unsigned long long minIndexAtLevel = q.front().second; // To prevent integer overflow
            unsigned long long first = 0, last = 0;

            for (int i = 0; i < size; ++i) {
                // Normalize index by subtracting minimum index at this level
                unsigned long long currIndex = q.front().second - minIndexAtLevel;
                TreeNode* node = q.front().first;
                q.pop();

                if (i == 0) first = currIndex;
                if (i == size - 1) last = currIndex;

                if (node->left) {
                    q.push({node->left, 2 * currIndex + 1});
                }
                if (node->right) {
                    q.push({node->right, 2 * currIndex + 2});
                }
            }

            maxWidth = max(maxWidth, last - first + 1);
        }

        return (int)maxWidth;
    }
};