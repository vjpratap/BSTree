#include <stdlib.h>
#include "expr_assert.h"
#include "tree.h"


BSTree createBSTree(void){
	BSTree *newTree = malloc(sizeof(BSTree));
	newTree->root = NULL;
	return *newTree;
};


TreeNodePtr createTreeNode(int data){
	TreeNodePtr newNode = malloc(sizeof(TreeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
};


TreeNodePtr insertData(TreeNodePtr root,int data){
	if(root == NULL)
		return createTreeNode(data);
	(data < root->data) ? (root->left = insertData(root->left,data)) : (root->right = insertData(root->right,data));
	return root;
};

int insert(BSTree *newTree, int data){ 
	newTree->root = insertData(newTree->root,data);
	return 1;
};

TreeNodePtr findNode(TreeNodePtr root,int data){
	if (root == NULL || root->data == data)
       return root;
    return (root->data < data) ? findNode(root->right, data) : findNode(root->left, data);
};

TreeNodePtr find(BSTree newTree, int data){
	return findNode(newTree.root,data);
};
