#include <iostream>
using namespace std;
// Simple Linklist program to insert nodes 
class node
{
    public:
    int data;
    node* next;
};

void print_list(node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}

void push_data(node** head_ref,int new_data)
{
    node* new_node= new node();
    new_node->data = new_data;
    new_node->next= (*head_ref);
    (*head_ref) = new_node;
}
int main()
{
    node* start = NULL;
    push_data(&start, 1);
    push_data(&start, 2);
    push_data(&start, 3);

    cout<<"Linklist:";
    print_list(start);




    
}