#include <iostream>

class linked 
{
    public: 
    struct node{
        int value; 
        struct node* next; 
        }; 

    node* create_node(int value);
    void push_node(node** header_ref, int value);  
    void insert_after(node* previous, int value); 
    void insert_last(node** header_ref, int value); 
};