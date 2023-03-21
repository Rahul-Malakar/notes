#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct node{
    int data;
    struct node *lchild;
    
    struct node *rchild;
}node;



 node* create(int data){
     node *n;
    n=( node *)malloc(sizeof( node));
    n->data=data;
    n->lchild=NULL;
    n->rchild=NULL;
    return n;
    
}
void inorder(node *root){
    if(!root){
        inorder(root->lchild);
        printf("%d", root->data);
        inorder(root->rchild);
    }
}
void preorder(node *root){
    if(!root){
        printf("%d", root->data);

        preorder(root->lchild);
        
        preorder(root->rchild);
    }
}
void postorder(node *root){
    if(!root){
        postorder(root->lchild);
        
        postorder(root->rchild);
        printf("%d", root->data);
    }
}
void printLeafNodes(node *root)
{
    
    if (!root)
        return;
     
    
    if (!root->lchild && !root->rchild)
    {
        printf("%d", root->data);
        return;
    }
 
    if (root->lchild)
       printLeafNodes(root->lchild);
         
    if (root->rchild)
       printLeafNodes(root->rchild);
}

int height(struct node *root){
    if(!root){
        return 0;
    }
    int lh=height(root->lchild);
    int rh=height(root->rchild);
    return 1+max(lh,rh);
    
}


int main(){

     node *p = create(1);
     node *p1 = create(2);
     node *p2 = create(3);
     node *p3 = create(4);
     node *p4 = create(5);

    p->lchild=p1;
    p->rchild=p2;
    p1->lchild=p3;
    p1->rchild=p4;

    // inorder(p);
    // printLeafNodes(p);
    int d=height(p);
    cout<<d<<endl;

    return 0;
}