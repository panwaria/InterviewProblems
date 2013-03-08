#include"BinaryTree.h"

class BST : public BT
{
public:
	//	BST(BTNode *node) { BT(node); }
		BST(BTNode *node): BT(node) {}

	BTNode* FindNode(int value, BTNode **parent)
	{
		BTNode *temp = root;
		while (temp != NULL)
		{
			*parent = temp;

			if(value == temp->value)
			    return temp;
			else if(value > temp->value)
				temp = temp->right;
			else
			    temp = temp->left;
		}

		return NULL;
	}

	void InsertNode(int val)
	{
		BTNode *nearNode = NULL;
		BTNode *res = FindNode(val, &nearNode);

		if(root == NULL)
		{
	        root = new BTNode(val);
	        return;
		}

		if(res != NULL)
		{
			cout<<"Node already present with value="<<val<<endl;
			return;
		}
		else    // Was not able to find that node, but we can get the prospective parent of the new node.
		{
			BTNode *node = new BTNode(val);

			if(val > nearNode->value)
			    nearNode->right = node;
			else
			    nearNode->left = node;
		}
	}

	void DeleteNode(int val)
	{
		if (root == NULL)
		{
			cout<<"No nodes in the tree.\n";
			return;
		}
		
		if(root->value == val)
		{
			BTNode *temp = root;

   			BTNode *node = removeMinNodeInRightSubTree(root);
   			
   			node->left = root->left;
   			node->right = root->right;
   			root = node;
   			
   			delete temp;
		}
		else
		{
			Node *parent = root;
			Node *start = NULL;
			
			if(value > root->value)
			{
				start = parent->right;
			}
			else
			{
				start = parent->left;
			}
			
			
			BTNode *temp = start;
			while(true)
			{
				if(value > temp->val)
				if(temp->left->value == val)
			}

		}
		
		
		
		


	    BTNode *nearNode;
		BTNode *res = FindNode(val, &nearNode);
		if(res == NULL)
		{
			cout<<"\nNode not found.";
			return;
		}

	    BTNode *temp = root;
	    if(val != temp->value)
	    {
			while (temp != NULL && (temp->left->value != val || temp->right->value != val))
			{
				*parent = temp;

				if(value == temp->value)
				    return temp;
				else if(value > temp->value)
					temp = temp->right;
				else
				    temp = temp->left;
			}
		}
	}
};
