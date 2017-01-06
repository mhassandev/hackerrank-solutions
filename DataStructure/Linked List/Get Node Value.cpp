/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* current = new Node();
    Node* prev = new Node();
    Node* next = new Node();
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        if(positionFromTail == count){
            return temp->data;
        }
        temp = temp->next;
        count++;
    }
    return 0;
}
