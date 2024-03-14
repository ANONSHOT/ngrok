# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
typedef struct BST {
 int data;
 struct BST *lchild, *rchild;
} node;
node *create_node() {
 node *temp;
 temp = (node *) malloc(sizeof(node));
 temp->lchild = NULL;
 temp->rchild = NULL;
 return temp;
}
void insert(node *root, node *new_node) {
 if (new_node->data < root->data) {
 if (root->lchild == NULL)
root->lchild = new_node;
 else
insert(root->lchild, new_node);
 }
 if (new_node->data > root->data) {
 if (root->rchild == NULL)
root->rchild = new_node;
 else
insert(root->rchild, new_node);
 }
}
void inorder(node *temp) {
 if (temp != NULL) {
 inorder(temp->lchild);
 printf("%3d", temp->data);
 inorder(temp->rchild);
 }
}
void preorder(node *temp) {
 if (temp != NULL) {
 printf("%3d", temp->data);
 preorder(temp->lchild);
 preorder(temp->rchild);
 }
}
void postorder(node *temp) {
 if (temp != NULL) {
 postorder(temp->lchild);
 postorder(temp->rchild);
 printf("%3d", temp->data);
 }
}
void main()
{
 int n=7,i=1;
 node *new_node, *root;
 node *create_node();
 root = NULL;
 clrscr();
 printf("\nProgram For Binary Search Tree ");
 for(i=1;i<=n;i++)
 {
 new_node = create_node();
 printf("\nEnter The Element ");
 scanf("%d", &new_node->data);
 if (root == NULL) /* Tree is not Created */
 root = new_node;
 else
 insert(root, new_node);
 }
 printf("\nThe Inorder display : ");
 inorder(root);
 printf("\nThe Preorder display : ");
 preorder(root);
 printf("\nThe Postorder display : ");
 postorder(root);
 getch();
}
