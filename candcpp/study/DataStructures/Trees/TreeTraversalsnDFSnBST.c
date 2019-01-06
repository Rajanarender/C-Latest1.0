#include<stdio.h>
#include<stdlib.h>
 
/******************************************************
Any Tree Traversal like PreOrder,InOrder,PostOrder can be treated as DFS[Depth First Search]
Inorder is BST

validations are necessary at every point since these functions are recursive 
******************************************************/

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

#if 1 //Follow this method,No need of below code
struct node* insert(struct node* root, int newdata)
{
	if(root == NULL) //V.V.Imp, data validation
	{
		struct node* newNode = (struct node*)malloc(sizeof(struct node));
		newNode->data = newdata;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}

	if (newdata < root->data) //data validation and then insertion accordingly
	{
		root->left  = insert(root->left, newdata); //V.V.Imp
	}
	else if (newdata > root->data) //data validation and then insertion accordingly
	{
		root->right = insert(root->right, newdata); //V.V.Imp   
	}
	return root; //V.V.Imp   
}
#endif

#if 0
struct node* createNode(value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
  
  
struct node* insert(struct node* root, int data)
{
    if (root == NULL) return createNode(data);

    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);   
    return root;
}
#endif

void preorder(struct node* root)
{
    if(root == NULL) return;
    printf("%d ->", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node* root)
{
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ->", root->data);
    inorder(root->right);
}

void postorder(struct node* root)
{
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ->", root->data);
}


int main()
{
    struct node *root = NULL;
    root = insert(root, 8); //This step is V.V.Imp
    insert(root, 3);
    insert(root, 1);
    insert(root, 6);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 4);

    preorder(root);
    printf("\n");

    inorder(root);
    printf("\n");

    postorder(root);
    printf("\n");
}
