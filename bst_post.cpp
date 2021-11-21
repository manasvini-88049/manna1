
#include <bits/stdc++.h>
using namespace std;

class TreeNode { // tree node is defined
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

void postorder(TreeNode* root)
{
    //base case
    if (root == NULL)
        return;
    // fisrt traverse left sub tree
    postorder(root->left);
    //secondly traverse right sub tree
    postorder(root->right);
    //finally traverse current node
    printf("%d ", root->val);
}

int main()
{
    //building the tree
    TreeNode* t = new TreeNode(7);
    t->left = new TreeNode(1);
    t->left->left = new TreeNode(0);
    t->left->right = new TreeNode(3);
    t->left->right->left = new TreeNode(2);
    t->left->right->right = new TreeNode(5);
    t->left->right->right->left = new TreeNode(4);
    t->left->right->right->right = new TreeNode(6);
    t->right = new TreeNode(9);
    t->right->left = new TreeNode(8);
    t->right->right = new TreeNode(10);

    printf("postorder traversal of the above tree is:\n");

    postorder(t);

    return 0;
}