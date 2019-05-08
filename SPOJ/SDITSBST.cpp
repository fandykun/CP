#include <stdio.h>
#include <stdlib.h>

struct node* search(struct node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
       return root;
    // Key is greater than root's key
    if (root->key < key)
       return search(root->right, key);
    // Key is smaller than root's key
    return search(root->left, key);
}

struct node{
    int key;
    struct node *left, *right;
};
// A utility function to create a new BST node
struct node *newNode(int item){
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root){
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
struct node* insert(struct node* node, int key){
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    /* return the (unchanged) node pointer */
    return node;
}

int main(){
    struct node *root = NULL;
    int n;
    scanf("%d", &n);
    while(n--){
        int a, b;
        scanf("%d%d", &a, &b);
        if(a==1){
            root = insert(root, b);
        }else if(b==1){

        }
    }
}
