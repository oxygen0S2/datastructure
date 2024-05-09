#include <stdlib.h>
#include "folderSize.h"

//size를 root 노드의 데이터 필드로 하여 왼쪽과 오른쪽 서브 트리를 연결
treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->size = size;
	root->left = leftNode;
	root->right = rightNode;

	return root;
}

//각 폴더 크기를 계산하기 위한 후위 순회
int postorder_FolderSize(treeNode* root) {
	if (root)
	{
		postorder_FolderSize(root->left);
		postorder_FolderSize(root->right);
		FolderSize += root->size;
	}
	return FolderSize;
}