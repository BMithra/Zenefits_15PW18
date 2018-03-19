#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}

inorderTraversal(struct Node *root){
    inorderTraversal(root->left);
    printf("%d,",root->data);
    inorderTraversal(root->right);
}

int main(){
    struct Node *root1;
    struct Node *root2;
    root1 = (struct Node *)malloc(sizeof(struct Node));
    root2 = (struct Node *)malloc(sizeof(struct Node));

    root1->data = 1;
    root1->left = 2;
    root1->left->left = 4;
    root1->left->right = 5;
    root1->right = 3;
    root1->right->right = 6;

    root2->data = 1;
    root2->left = 2;
    root2->left->left = 4;
    root2->right = 3;
    root2->right->right = 5;

    inorderTraversal(root1);
    inorderTraversal(root2);
    return 0;

    /*
    int i,n;
    scanf("%d",&n);

    struct Node *root[n];
    for(i = 0; i < n; i++){
        root[i] = (struct Node *)malloc(sizeof(struct Node));
    }

    for(i = 0; i < n; i++){
        inorderTraversal(root[i]);
    }
    */
}
