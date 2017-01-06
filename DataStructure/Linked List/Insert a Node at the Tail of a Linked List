/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *insert = new Node();
    insert->data = data;
    
    Node *cur = head;
    
    if(head == NULL){
        head = insert;
        //cout << insert->data << " --> NULL";
    }
    else{
        while(cur->next != NULL){
            //cout << cur->data << " -->";
            cur = cur->next;
        }
        cur->next = insert;
        //cout << insert->data << " --> NULL";
    }
    return head;
  // Complete this method
}
