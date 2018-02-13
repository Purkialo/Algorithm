/**
 * 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
 假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
		if (pre.empty() || vin.empty())
			return NULL;
        vector<int>::iterator startpre = pre.begin();
        vector<int>::iterator endpre = pre.end() - 1;
        vector<int>::iterator startvin = vin.begin();
		vector<int>::iterator endvin = vin.end() - 1;
        
        return ConstructCore(startpre,endpre,startvin,endvin);
    }
    TreeNode* ConstructCore(vector<int>::iterator startpre,vector<int>::iterator endpre,vector<int>::iterator startvin,vector<int>::iterator endvin){
        int rootval = *startpre;
		TreeNode* root = new TreeNode(rootval);
        //左（右）子树中是否仅剩一个元素了，如果是，则完成该元素定位
        if(startpre == endpre) {
            if (startvin == endvin && *startpre == *startvin) {
                return root;
            }
            else
                return nullptr;
		}
        vector<int>::iterator rootindex = startvin;
        while(rootindex != endvin && *rootindex != rootval)
			++rootindex;
        //对左右子树进行分解迭代
        int length = rootindex - startvin;//子树长度
        
        if(length > 0)
            root->left = ConstructCore(startpre+1,startpre+length,startvin,rootindex-1);
        if(endvin - rootindex > 0)
            root->right = ConstructCore(startpre+length+1,endpre,rootindex+1,endvin);
		return root;
    }
};