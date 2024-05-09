#include <stdio.h>
#include "traversalBT.h"

//(A * B - C / D) 수식 이진 트리 순회
int main()
{
	treeNode* n7 = makeRootNode('D', NULL, NULL);
	treeNode* n6 = makeRootNode('C', NULL, NULL);
	treeNode* n5 = makeRootNode('B', NULL, NULL);
	treeNode* n4 = makeRootNode('A', NULL, NULL);
	treeNode* n3 = makeRootNode('/', n6, n7);
	treeNode* n2 = makeRootNode('*', n4, n5);
	treeNode* n1 = makeRootNode('-', n2, n3);

	printf("\npreorder : ");
	preorder(n1);

	printf("\ninorder : ");
	inorder(n1);

	printf("\npostorder : ");
	postorder(n1);

	getchar();
	return 0;
}