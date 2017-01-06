/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    
    Node* prev = head;
    
    while(head->next != NULL){
        if(head->data == head->next->data){
            head->next = head->next->next;
        }else{
            head = head->next;
        }
    }
    
    //while(head != NULL){
      //  Node* nextdata = new Node();
        //nextdata = head->next;
        //if(head->data == nextdata->data){
          //  head->next = nextdata->next;
        //}
        
       // head = head->next;
        
    //}
    return prev;
}
