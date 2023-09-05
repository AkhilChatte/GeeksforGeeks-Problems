class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zero = 0;
        int one = 0;
        int two = 0;
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == 0){
                zero++;
            }
            else if(temp->data == 1){
                one++;
            }
            else{
                two++;
            }
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL){
            if(zero != 0){
                temp->data = 0;
                temp = temp->next;
                zero--;
            }
            else if(one != 0){
                temp->data = 1;
                temp = temp->next;
                one--;
            }
            else{
                temp->data = 2;
                temp = temp->next;
                two--;
            }
        }
        return head;
    }
};