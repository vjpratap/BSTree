#include "expr_assert.h"
#include <stdlib.h>
#include "tree.h"


void test_that_function_createBSTree_create_a_tree_or_not(){
	BSTree tree = createBSTree();
	assertEqual((int)tree.root,0);
};

void test_that_function_insert_insert_the_value_in_the_tree_or_not(){
	BSTree tree = createBSTree();
	int boolean = insert(&tree,100);
	assertEqual(tree.root->data,100);
	assertEqual(boolean,1);
};

void test_that_function_insert_insert_the_element_in_the_tree_or_not(){
	BSTree newTree = createBSTree();
	insert(&newTree,10);
	insert(&newTree,20);

	assertEqual(newTree.root->data,10);
	assertEqual((int)newTree.root->left, 0);
	assertEqual(newTree.root->right->data,20);
};

void test_that_function_insert_isert_the_element_in_the_tree_or_not_for_many_datas(){
	BSTree newTree = createBSTree();
	insert(&newTree,20);
	insert(&newTree,10);
	insert(&newTree,15);
	insert(&newTree,25);
	insert(&newTree,30);
	insert(&newTree,5);
	insert(&newTree,22);	
	
	assertEqual(newTree.root->data,20);
	assertEqual(newTree.root->left->data, 10);
	assertEqual(newTree.root->left->left->data, 5);
	assertEqual(newTree.root->left->right->data, 15);
	assertEqual(newTree.root->right->data, 25);
	assertEqual(newTree.root->right->right->data, 30);
	assertEqual(newTree.root->right->left->data, 22);
}

void test_that_function_find_finds_the_element_in_the_tree_or_not(){
	TreeNodePtr treeRoot;
	BSTree newTree = createBSTree();
	insert(&newTree,20);
	insert(&newTree,10);
	insert(&newTree,15);
	insert(&newTree,25);
	insert(&newTree,30);
	insert(&newTree,5);
	insert(&newTree,22);
	treeRoot = find(newTree,22);
	
	assertEqual(treeRoot->data, 22);
};

void test_that_function_find_gives_zero_when_data_is_not_match_with_the_any_element_of_the_tree(){
	TreeNodePtr treeRoot;
	BSTree newTree = createBSTree();
	insert(&newTree,20);
	insert(&newTree,10);
	insert(&newTree,15);
	insert(&newTree,25);
	insert(&newTree,30);
	insert(&newTree,5);
	treeRoot = find(newTree,9);

	assertEqual((int )treeRoot, 0);
};

