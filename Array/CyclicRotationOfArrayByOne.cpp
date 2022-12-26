void rotate(int arr[], int n)
{
    reverse(arr,arr+n);
    int i=1;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
