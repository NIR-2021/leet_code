#include<iostream>

using namespace std;

class Node{
    public:
        Node* previous;
        Node* next;
        int data;

        Node(int data1){
            data = data1;
            previous = NULL;
            next = NULL;
        }
};

void print_list(Node* node){
    while(true){
        cout<<"\n"<<node->data<<"\t"<<node->previous<<"\t"<<node->next;
        if(node->next != NULL){
            node = node->next;
        }
        else{
            break;
        }
    }
}

void insert_node(int data,Node* node){
    if(node->next == NULL){
        Node* new_node = new Node(data);
        new_node->previous = node;
        node->next = new_node;
    }
    else{
        node = node->next;
        insert_node(data,node);
    }
}


int main(){
    Node* root = new Node(10);
    insert_node(11,root);
    insert_node (12,root);
    insert_node(13,root);
    print_list(root);
    return 0;
}