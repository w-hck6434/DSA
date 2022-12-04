class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        int i;
        sort(arr, arr+n);
        for(i=0; i<n-2; i++)
            if(arr[i+1]-arr[i]!=arr[i+2]-arr[i+1])
            return false;
        return true;
    }
};
