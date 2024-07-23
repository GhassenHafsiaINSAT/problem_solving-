#include "LinkedList.h"

linked::node* linked::create_node(int value){
    
    struct node* new_node = new node(); 
    new_node->value = value; 
    new_node->next = NULL; 
    return new_node; 

}

void linked::push_node(linked::struct node** head_ref, int value){

    struct node *new_node = linked::create_node(value); 
    new_node->next=(*head_ref); 
    (*head_ref) = new_node;

}

void linked::insert_after(linked::struct node* previous, int value){
    if (previous->next == NULL) std::cout<<"previous couldn't be the last one"<<std::endl; 
    struct node *new_node = linked::create_node(value); 
    new_node-> next = previous-> next; 
    previous-> next = new_node; 
}

void linked::insert_last(linked::struct node** header_ref, int value){
    
    struct node *new_node = linked::create_node(value); 
    if ((*header_ref)-> next == NULL) (*header_ref)->next = new_node; 
    while ((*header_ref)->next != NULL)
    {
        (*header_ref) = (*header_ref)->next; 
    }
    (*header_ref)->next = new_node;
    
}