class Solution{
  public:
  
    Node* getMiddle(Node *head)
    {
        Node* slow = head;
        Node* fast = head->next;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        if(head->next == NULL){
            return true;
        }
        
        //get middle of LL
        Node* mid = getMiddle(head);
        
        //Reverse later half of LL
        Node* temp = mid->next;
        mid->next = reverse(temp);
        
        //Declare two pointers for two halves of LL
        Node* head1 = head;
        Node* head2 = mid->next;
        
        //Comparing
        while(head2 != NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return true;
    }
};