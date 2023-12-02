//User function Template for C++

/*the function contains vector of pairs*/
//Complete this function to print the sum
void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    //Your code here
    for(int i=0; i<v.size(); i++){
        sum += v[i].second;
    }
    cout<<sum;
    cout<<endl;
}