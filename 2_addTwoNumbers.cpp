#include<iostream>
using namespace std;

struct node{
    int value;
    node* next;
};

struct node* create_node(int val){
    node* new_node = new node;
    new_node->value = val;
    new_node->next=NULL;

    return new_node;
}

struct node* create_node(struct node* head, int val){
    head->next=create_node(val);
}




int main(){
    
    return 0;
}