

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int k) {
    deque<long long int> dq;
    vector<long long> ans;
    
    for(int i=0; i<k; i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    
    if(!dq.empty()){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    for(int i=k; i<N; i++){
        if(!dq.empty() && i-dq.front()>=k){
            dq.pop_front();
        }
        if(A[i] < 0){
            dq.push_back(i);
        }
        
        if(!dq.empty()){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
 }