/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node * insert = new Node();
    insert->data = data;
    if(position == 0){
        if(head == NULL){
            head = insert;
        }else{
            insert->next = head;
            head = insert;
        }
    }
    else{
        Node *cur = head;
        for(int i = 0;i < position-1; i++){
            cur = cur->next;
        }
        insert->next = cur->next;
        cur->next = insert;
    }
    return head;
}
