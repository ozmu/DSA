#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    char isbn[15];
    char bookName[40];
    char author[20];
    int pageNumber;
    struct node *next;
};

typedef struct node Node;
Node *root = NULL;
Node *current =NULL;

Node insertNode(char*,char*,char*,int);  //38
int bookNumber();                        //58
void display();                          //67
bool isEmpty();                          //77
Node deleteNode(char*);
Node search(Node *);
void sort();
void reverse();


int main(){
    insertNode("9786055029357","Hayvanlardan Tanrılara Sapiens","Noah Harari",402);
    insertNode("9786055029630","Homo Deus,yarının kısa bir tarihi","Yuval Noah Harari",453);
    
    display();
    printf("\n------------------------\nToplam kitap sayısı: %d\n------------------------\n",bookNumber());

}

Node insertNode(char *isbn,char *bookName,char *author,int pageNumber){
    if (bookNumber() != 0){
        current = root;
        while (current->next != NULL){
            current = current->next;
        }
        current->next = (Node*)malloc(sizeof(Node));
        current = current->next;
        strcpy(current->isbn,isbn);
        strcpy(current->bookName,bookName);
        strcpy(current->author,author);
        current->pageNumber = pageNumber;
        current->next = NULL;
    }
    else{
        root = (Node *)malloc(sizeof(Node));
        strcpy(root->isbn,isbn);
        strcpy(root->bookName,bookName);
        strcpy(root->author,author);
        root->pageNumber = pageNumber;
        root->next = NULL;
    }
}

int bookNumber(){
    int length = 0;
    Node *current = root;
    for(current;current != NULL;current=current->next){
        length++;
    }
    return length;
}

void display(){
    int counter=1;
    current = root;
    for(current;current != NULL;current=current->next,counter++){
        printf("--------------  %d. Kitap --------------\nISBN: %s\nBook Name: %s\nAuthor: %s\nPage Number: %d\n\n",
        counter,current->isbn,current->bookName,current->author,current->pageNumber);
    }
}

bool isEmpty(){
    return root == NULL;
}