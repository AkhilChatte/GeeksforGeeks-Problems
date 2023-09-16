void insert(stack<int>&s,int t){
    if(s.size()==0||s.top()<=t){
        s.push(t);
        return;
    }
    int v=s.top();
    s.pop();
    insert(s,t);
    s.push(v);
    return;
}

void SortedStack :: sort()
{
    //Your code here
    if(s.size()==1)
        return;
    int t=s.top();
    s.pop();
    SortedStack::sort();
    insert(s,t);
}