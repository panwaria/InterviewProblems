#include "BST.h"
using namespace std;

// METHOD IMPLEMENTATIONS

BTNode* BST::FindNode(int value, BTNode **parent)
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

void BST::InsertNode(int val)
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

void BST::DeleteNode(int val)
{
    BTNode *nearNode;
	BTNode *res = FindNode(val, &nearNode);

}
