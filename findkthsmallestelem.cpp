int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr+l,arr+l+r+1);
    return arr[l+k-1];
    }