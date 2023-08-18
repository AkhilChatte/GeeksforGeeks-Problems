void rotate(int arr[], int n)
{
    for(int i=n-2; i>=0; i--){
        swap(arr[i], arr[i+1]);
    }
    
}