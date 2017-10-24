#ifndef stack_list
#define stack_list
    struct n{
        int data;
        n* next;
    };

    typedef struct n node;
    int pop(node*);
    node* push(node*,int);
    void display(node*);
#endif //stack_list
