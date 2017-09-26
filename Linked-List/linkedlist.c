#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char isbn[13];
    char bookName[40];
    char author[20];
    int pageNumber;
    struct node *next;
};

typedef struct node Node;
Node *root = NULL;

Node insertNode(char*,char*,char*,int);
void deleteNode(Node *);
void display();
Node search(Node *);
int bookNumber();


int main(){
   insertNode("9786055029357","Hayvanlardan Tanrılara Sapiens","Noah Harari",402);
   insertNode("9786055029630","Homo Deus:yarının kısa bir tarihi","Yuval Noah Harari",453);
   display();
   printf("Sayı: %d\n",bookNumber());

}

Node insertNode(char *isbn,char *bookName,char *author,int pageNumber){
    if (bookNumber() != 0){
        Node *book = (Node *)malloc(sizeof(Node));
        strcpy(book->isbn,isbn);
        strcpy(book->bookName,bookName);
        strcpy(book->author,author);
        book->pageNumber = pageNumber;
        book->next = NULL;
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
    Node *current = root;
    for(current;current != NULL;current=current->next){
        printf("--------------  %d. Kitap --------------\nISBN: %d\nBook Name: %s\nAuthor: %s\nPage Number: %d\n",
        counter,current->isbn,current->bookName,current->author,current->pageNumber);

    }
}