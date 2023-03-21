#include<stdio.h>
#include<malloc.h>
struct node{

    struct node *lchild;
    int data;
    struct node *rchild;
};

struct node *root=NULL;

struct node* create(int data){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->lchild=NULL;
    n->lchild=NULL;
    return n;
    
}

void inorder(struct node *root){
    if(root!=NULL){
         
        
        inorder(root->lchild);
        printf("%d", root->data); 
        inorder(root->rchild);
        
    }
}

int main(){

    struct node *p = create(4);
    struct node *p1 = create(1);
    struct node *p2 = create(6);
    struct node *p3 = create(5);
    struct node *p4 = create(2);

    p->lchild=p1;
    p->rchild=p2;
    p1->lchild=p3;
    p1->rchild=p4;

    inorder(p);
    

    return 0;
}