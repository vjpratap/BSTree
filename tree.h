typedef struct treeNode TreeNode;
typedef TreeNode* TreeNodePtr;

typedef struct bsTree BSTree;

struct bsTree{
	TreeNodePtr root;
};

struct treeNode{
	int data;
	TreeNodePtr left;
	TreeNodePtr right;
};

BSTree createBSTree(void);
int insert(BSTree *, int);
TreeNodePtr find(BSTree, int);