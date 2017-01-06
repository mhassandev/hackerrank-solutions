/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node * insert = new Node();
    insert->data = data;
    
    if(head == NULL){
        head = insert;
    }else{
        insert->next = head;
        head = insert;
    }
    return head;
}
