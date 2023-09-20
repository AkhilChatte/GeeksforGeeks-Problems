class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* fast = head;
        Node* slow = head;
        
        while(fast && fast->next){
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
            }
            slow = slow->next;
            
            if(slow == fast){
                // slow == fast shows that loop exist and here we reset slow and speed of fast to 1 to find start node of loop
                slow = head;
                while(fast != slow)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                // we have found the starting node of the loop
                
                while(fast->next != slow)
                    fast = fast->next;
                fast->next = NULL;
            }
        }
    }
};