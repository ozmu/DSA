#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct n {
    int data;
    n *next;
};

typedef n node;

int main(){
    /*node *root;
    root = (node *)malloc(sizeof(node));
    root->data = 10;
    root->next=0;
    printf("%d",root->next);
    root->next = (node *)malloc(sizeof(node));
    root->next->data = 30;
    node *x = root->next;
    x ->= data;
    printf("%d",x->data);*/
    node *root = NULL;
    root=(node*)malloc(sizeof(node));
    root->data = 10;
    printf("%d",root->data);
}
