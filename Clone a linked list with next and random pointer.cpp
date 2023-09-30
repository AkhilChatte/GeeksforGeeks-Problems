class Solution
{
    private:
    void insertAtTail(Node* &head, Node* &tail, int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        // Step1: create a clone list with next
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // Step2: Create a map
        unordered_map<Node*, Node*> mapping;
        Node* ogtemp = head;
        Node* clonetemp = cloneHead;
        while(ogtemp!=NULL && clonetemp!=NULL){
            mapping[ogtemp] = clonetemp;
            ogtemp = ogtemp->next;
            clonetemp = clonetemp->next;
        }
        
        ogtemp = head;
        clonetemp = cloneHead;
        while(ogtemp != NULL){
            clonetemp->arb = mapping[ogtemp->arb];
            ogtemp = ogtemp->next;
            clonetemp = clonetemp->next;
        }
        
        return cloneHead;
    }

};