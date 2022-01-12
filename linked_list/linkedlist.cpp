#include<iostream>

using namespace std;



struct node{
    node* previous;
    node* next;
    int data;

};

void print_list(node* root){
    cout<<"\nNew print list\n";
    while(true){
        cout<<root<<"\t\t"<<root->data<<"\t\t"<<root->next<<"\t\t"<<root->previous<<"\n";
        if(root->next == NULL)
            break;
        else;
            root = root->next;
            break;
    }
}

void add_node(node* nod, int data){
    cout<<"\nFunction param "<<nod<<"\t"<<data<<"\n";
    if(nod->next == NULL){
        cout<<"\ninside if";
        node new_node;

        new_node.data = data;
        new_node.next = NULL;
        new_node.previous = nod;
        nod->next = &new_node;
        
        return;
    }
    else{
        cout<<"\ninside else";
        add_node(nod->next,data);
        return;
    }
    print_list(nod);
}



int main(){
    node root;
    root.data = 10;
    root.previous = NULL;
    root.next = NULL;

    add_node(&root,11);
    add_node(&root,12);

    print_list(&root);
    return 0;
}