/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *insert = new Node();
    if(position == 0){
        insert = head;
        head = head->next;
    }else{
        Node* cur = head;
        for(int i = 0; i < position-1; i++){
            cur = cur->next;
        }
        insert = cur->next;
        cur->next = insert->next;
    }
    if(head == NULL){
        head = NULL;
    }
    delete insert;
    return head;
}
