Node* solve(Node* head1, Node* head2){
    
    // If there is only one element in the list 1
    if(head1->next == NULL){
        head1->next = head2;
        return head1;
    }
    
    Node* curr1 = head1;
    Node* next1 = curr1->next;
    Node* curr2 = head2;
    Node* next2 = curr2->next;
    
    while(next1 != NULL && curr2 != NULL){
        if(curr1->data <= curr2->data && curr2->data <= next1->data){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return head1;
            }
        }
    }
    return head1;
}

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    
    if(head1->data <= head2->data){
        return solve(head1, head2);
    }
    else{
        return solve(head2, head1);
    }
}