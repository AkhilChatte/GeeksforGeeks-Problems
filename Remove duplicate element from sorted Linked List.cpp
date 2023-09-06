/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    // your code goes here
    Node* curr = head;
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* toDelete = curr->next;
            delete(toDelete);
            curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}