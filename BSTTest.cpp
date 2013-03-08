#include<iostream>
#include"BST.h"

int main()
{
	BTNode n(5);
	BST bst(&n);
	
	//int nodes[7] = { 3, 1, 4, 10, 8, 9, 11 };
	int nodes[7] = { 1, 2, 3, 4, 6, 7, 8 };
		
	for (int i = 0; i < 7; i++)
		bst.InsertNode(nodes[i]);

	bst.inorder();
}
