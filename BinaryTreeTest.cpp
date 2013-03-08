#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
	/* TREE SAMPLE 01
	BTNode n1(1), n2(2), n3(3), n4(4), n5(5), n6(6), n7(7);
	n1.addToLeft(&n2); n1.addToRight(&n3);
	n2.addToLeft(&n4); n2.addToRight(&n5);
	n3.addToLeft(&n6); n3.addToRight(&n7);
	*/

	BTNode n1(1), n2(2), n3(3), n4(4), n5(5), n6(6), n7(7);
	n1.addToLeft(&n2); n1.addToRight(&n3);
	n2.addToLeft(&n4); n3.addToRight(&n5);
	n4.addToLeft(&n6); n6.addToLeft(&n7);

	BT tree(&n1);
	
	cout<<"\nINORDER TRAVERSAL of TREE:\n";
	tree.inorder();

	cout<<"\nPREORDER TRAVERSAL of TREE:\n";
	tree.preorder();

	cout<<"\nPOSTORDER TRAVERSAL of TREE:\n";
	tree.postorder();

 	cout<<"\nLEVELORDER TRAVERSAL of TREE:\n";
	tree.levelorder();
	
	cout<<"\nMAX DEPTH of TREE:\n";
	cout<<tree.maxDepth();

	cout<<"\nMIN DEPTH of TREE:\n";
	cout<<tree.minDepth();
	
	cout<<"\nIS TREE BALANCED\n";
	cout<< (tree.isBalanced() ? "Yes" : "No");
	
	return 0;
}
	
