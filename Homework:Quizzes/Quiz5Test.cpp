#include <iostream>

using namespace std;

struct TreeNode
{
    int key;
    TreeNode* left;
    TreeNode* right;
};

int findSum(TreeNode * root, int depth)
{
    if(root != NULL)
    {
        int rightSum = findSum(root->right, depth + 1);
        int leftSum = findSum(root->left, depth + 1);
        cout << root->key;
        if (depth != 0)
        {
            cout << " ";
        }
        return rightSum + leftSum + root->key;
    }
    else
       return 0;
}

int main()
{
    TreeNode one;
    TreeNode two;
    TreeNode three;
    TreeNode four;
    TreeNode five;
    TreeNode six;
    TreeNode seven;
    //hard coded
    one.left.key = 17;
    one.right.key = 21;
    two.left.key = 14;
    two.right.key = nullptr;
    three.left.key = 7;
    three.right.key = 15;
    four.left.key = 12;
    four.right.key = nullptr;

    findSum(root, 0);
    return 0;
}
