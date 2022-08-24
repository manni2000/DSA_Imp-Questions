#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
   int data;
   struct TreeNode *left, *right;
};

struct TreeNode* node(int data){
    struct TreeNode* node= (struct TreeNode *) malloc(sizeof(struct TreeNode));
    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return node;
}

vector<int>morrisInorderTrav(TreeNode* Root){
    vector<int> Inorder;

    if(Root == NULL) return Inorder;

   TreeNode* temp= Root;
   while(temp!=NULL){
      if(temp->left == NULL){
        Inorder.push_back(temp->data);
        temp=temp->right;
    }
    else{
        TreeNode* prev = temp->left;
        while(prev->right!=NULL && prev->right!=Root){
            temp=temp->right;
        }
      
      if(prev->right == NULL){
         prev->right=temp;
         temp=temp->left;
      }
      else{
        prev->right=NULL;
        Inorder.push_back(temp->data);
        temp=temp->right;
      }
    }
   }
    return Inorder;
}

int main() {

  struct TreeNode * root = node(1);
  root -> left = node(2);
  root -> right = node(3);
  root -> left -> left = node(4);
  root -> left -> right = node(5);
  root -> left -> right -> right = node(6);

  vector < int > Inorder;
  Inorder = morrisInorderTrav(root);

  cout << "The Inorder Traversal is: ";
  for (int i = 0; i < Inorder.size(); i++) {
    cout << Inorder[i] << " ";
  }
  return 0;
}