class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], int low, int mid,int high ) {
        vector<long long>temp;
        long long left = low;
        long long right = mid+1;
        long long count=0;
        while(left<=mid && right<=high) {
            if(arr[left]<=arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                count+=(mid-left+1);
                right++;
            }
        }
        while(left<=mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high) {
            temp.push_back(arr[right]);
            right++;
        }
        // transferring all elements from temporary to arr
        for(int i=low;i<=high;i++) {
            arr[i] = temp[i-low];
        }
        return count;
    }
    
    long long int mergeSort(long long arr[], int low, int high) {
        long long count=0;
        if(low>=high) return count;
        int mid = (low+high)/2;
        count+= mergeSort(arr, low, mid);
        count+= mergeSort(arr, mid+1, high);
        count+= merge(arr, low, mid, high);
        return count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr,0,N-1);
    }

};