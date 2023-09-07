class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
       unordered_map<Node*,int> mp;
        while(head){
            mp[head]++;
            if(mp[head]>1)
                return true;
            head=head->next;
        }
        return false;
    }
};