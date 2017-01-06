/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head);
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    head = Reverse(head);
    Node* cur = head;
    while(cur != NULL){
        cout <<cur->data << endl;
        cur = cur->next;
    }
}

Node* Reverse(Node *head){
    Node* current = new Node();
    Node *next = new Node();
    Node *prev = new Node();
    current = head;
    prev = NULL;
    
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
        head = prev;
    return head;
}
