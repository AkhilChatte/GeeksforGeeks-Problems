/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head)
    {
        // your code goes here
        unordered_map<int,bool>visited;
        Node* temp=head;
        Node* prev = head;
    
        while(temp!=NULL){
            if(visited[temp->data]!=true)
            {
                visited[temp->data]=true;
                prev = temp;
                temp=temp->next;
            }
            else{
                prev->next = temp->next;
                temp = prev->next;
      
            }
        }
        return head;
    }
};