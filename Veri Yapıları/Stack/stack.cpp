#include <iostream>
#include <stdlib.h>
#include "stack_list.h"

using namespace std;

int pop(node* root){
    if(root == NULL){
        cout << "Stack is empty!";
        return -1;
    }
    if(root->next == NULL){
        int rootValue = root->data;
        free(root);
        return rootValue;
    }
    node *iter = root;
    while(iter->next->next != NULL){
        iter = iter->next;
    }
    node *temp = iter->next;
    int rootValue = temp->data;
    iter->next = NULL;
    free(temp);
    return rootValue;
}

node *push(node* root,int data){
    if (root==NULL){
        root = (node*)malloc(sizeof(node));
        root->data = data;
        root->next = NULL;
        return root;
    }

    node *iter = root;
    while(iter->next != NULL){
        iter = iter->next;
    }
    node *temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    iter->next = temp;
    return root;
}

void display(node *root){
    while(root != NULL){
        cout << root->data << endl;
        root = root->next;
    }
}

int main(){
    node* s = NULL;
    s = push(s,10);
    cout << pop(s) << endl;
    s = push(s,20);
    s = push(s,30);
    s = push(s,40);
    s = push(s,50);
    //cout << pop(s) << endl;
    //cout << pop(s) << endl;

    // Display
    display(s);
}




