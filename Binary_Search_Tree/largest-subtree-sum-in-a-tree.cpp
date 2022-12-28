#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int subtree(Node *root, int &ans)
{
    if (root == NULL)
        return 0;

    int lsum = subtree(root->left, ans);
    int rsum = subtree(root->right, ans);
    int tot = root->data + lsum + rsum;
    ans = max(ans, tot);
    return tot;
}

int findLargestSubtreeSum(Node *root)
{
    int ans = INT_MIN;
    subtree(root, ans);
    return ans;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "Largest subtree sum: " << findLargestSubtreeSum(root) << endl;

    return 0;
}
