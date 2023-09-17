class Solution{
  public:
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    
    Node* merge(Node* left, Node* right){
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;
            
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        while(left!=NULL && right!=NULL){
            if(left->data < right->data){
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else{
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        
        // If right list is shorter
        while(left != NULL){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        // If left list is shorter
        while(right != NULL){
            temp->next = right;
            temp = right;
            right = right->next;
        }
        
        ans = ans->next;
        return ans;
    }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        // Divide LL in two halves
        Node* mid = getMid(head);
        Node* left = head;
        Node* right = mid->next;
        mid->next = NULL;
        
        // recursive calls to sort halves
        left = mergeSort(left);
        right = mergeSort(right);
        
        // merging
        Node* ans = merge(left, right);
        
        return ans;
    }
};