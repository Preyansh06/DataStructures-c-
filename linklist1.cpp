#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;
}; 
void pairswap(node *head)
{
  node *temp = head;

  while (temp != NULL && temp->next != 0)
  {
    swap(temp->data, temp->next->data);
    temp = temp->next->next;
  }
}

void push(node **head_ref, int new_data)
{
  node *new_node = new node();
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void print_data(node *node)
{
  while (node != NULL)
  {

    cout << node->data << " ";
    node = node->next;
  }
}

int main()
{
  node *start = NULL;

  push(&start, 1);
  push(&start, 2);
  push(&start, 3);
  push(&start, 4);
  push(&start, 5);
  push(&start, 6);
  push(&start, 7);
  push(&start, 8);

  cout << "Ordered Linklist:" << endl;
  print_data(start);

  pairswap(start);
  cout <<endl<< "Pairwise swapped Linklist:" << endl;
  print_data(start);
}