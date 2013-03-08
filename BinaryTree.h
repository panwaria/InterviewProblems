#include<iostream>
#include<cmath>

using namespace std;

class BTNode
{
public:
	BTNode *left;
	BTNode *right;
	int value;
	
	BTNode(int val)
	{
		left = NULL;
		right = NULL;
		value = val;
	}
	
	void addToLeft(BTNode *node)
	{
		left = node;
	}
	
	void addToRight(BTNode *node)
	{
		right = node;
	}
		
};

class LLNode
{
public:

	LLNode(BTNode *val)
	{
		btnode = val;
		next = NULL;
	}

	BTNode *btnode;
	LLNode *next;
};

class BT
{
public:
	BTNode *root;
	
	BT(BTNode *node)
	{
		root = node;
	}
	
//	BT()
//	{
//		root = NULL;
//	}
//
//	BT (const BT& bt)
//	{
//		*this = bt;
//	}
	
	void inorder()	{inorder(root);}
	
	void inorder(BTNode *node)
	{
		if(node != NULL)
		{
			inorder(node->left);
			cout<<node->value<<" ";
			inorder(node->right);
		}
	}

	void preorder()	{preorder(root);}

	void preorder(BTNode *node)
	{
		if(node != NULL)
		{
			cout<<node->value<<" ";
			preorder(node->left);
			preorder(node->right);
		}
	}

	void postorder() {postorder(root);}

	void postorder(BTNode *node)
	{
        if(node != NULL)
		{
			postorder(node->left);
			postorder(node->right);
			cout<<node->value<<" ";
		}
	}
	
	void levelorder()
	{
		LLNode *hdr = new LLNode(root);
		
		LLNode *temp(NULL);
		BTNode *tempBTNode;
		
		while(hdr != NULL)
		{
            tempBTNode = hdr->btnode;
			cout << tempBTNode->value << " ";
			
			temp = hdr;
			while(temp->next != NULL)
				temp = temp->next;

			if(tempBTNode->left != NULL)
			{
				temp->next = new LLNode(tempBTNode->left);
				temp = temp->next;
			}
			if(tempBTNode->right != NULL)
				temp->next = new LLNode(tempBTNode->right);

			LLNode *temp2 = hdr;
			hdr = hdr->next;    // DEQUEUE
			delete temp2;
		}
  	}
  	
  	int maxDepth() { return maxDepth(root); }

  	int maxDepth(BTNode * node)
  	{
		if(node == NULL)
		    return 0;
		    
		return 1 + max(maxDepth(node->left), maxDepth(node->right));
	}
	
	int minDepth() { return minDepth(root); }

  	int minDepth(BTNode * node)
  	{
		if(node == NULL)
		    return 0;

		return 1 + min(maxDepth(node->left), maxDepth(node->right));
	}

	bool isBalanced()
	{
		return (maxDepth(root) - minDepth(root) <= 1);
	}
	
	void Print()
	{
//		BTNode *temp = root;
		
	}
	
	
};
