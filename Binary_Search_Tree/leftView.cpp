// C++ program to print left view of
// Binary Tree

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void printLeftView(Node* root)
{
	if (!root)
		return;

	queue<Node*> q;
	q.push(root);

	while (!q.empty())
	{	
		// number of nodes at current level
		int n = q.size();
		
		// Traverse all nodes of current level
		for(int i = 1; i <= n; i++)
		{
			Node* temp = q.front();
			q.pop();
				
			// Print the left most element
			// at the level
			if (i == 1)
				cout<<temp->data<<" ";
			
			// Add left node to queue
			if (temp->left != NULL)
				q.push(temp->left);

			// Add right node to queue
			if (temp->right != NULL)
				q.push(temp->right);
		}
	}
}	

// Driver code
int main()
{


	Node* root = newNode(10);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(7);
	root->left->right = newNode(8);
	root->right->right = newNode(15);
	root->right->left = newNode(12);
	root->right->right->left = newNode(14);

	printLeftView(root);
}

