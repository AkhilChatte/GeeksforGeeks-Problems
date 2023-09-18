class Solution
{
    public:
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
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        
        Node* head = NULL;
        Node* tail = NULL;
        
        int carry = 0;
        while(first!=NULL && second!=NULL){
            int sum = carry + first->data + second->data;
            int digit = sum%10;
            insertAtTail(head, tail, digit);
            carry = sum / 10;
            first = first->next;
            second = second->next;
        }
        
        // If first is smaller
        while(first != NULL){
            int sum = carry + first->data;
            int digit = sum%10;
            insertAtTail(head, tail, digit);
            carry = sum / 10;
            first = first->next;
        }
        // If second is smaller
        while(second != NULL){
            int sum = carry + second->data;
            int digit = sum%10;
            insertAtTail(head, tail, digit);
            carry = sum / 10;
            second = second->next;
        }
        // If carry is left at the end
        while(carry != 0){
            int sum = carry;
            int digit = sum%10;
            insertAtTail(head, tail, digit);
            carry = sum / 10;
        }
        
        Node* ans = reverse(head);
        return ans;
    }
};