Resorce link :- https://www.youtube.com/watch?v=ogjf7ORKfd8&pp=ygUKbWVyZ2Ugc29ydA%3D%3D

//The concept is based on divide and merge

Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int i=l;
        int j=m+1;
        int k=l;
        int temp[r+1];
        while(i<=m&&j<=r){
            if(arr[i]<=arr[j]) temp[k++]=arr[i++];
            else temp[k++]=arr[j++];
        }
        while(j<=r) temp[k++]=arr[j++];
        while(i<=m) temp[k++]=arr[i++];
        for(int i=l;i<=r;i++) arr[i]=temp[i];
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(abs(l-r)==0) return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};
