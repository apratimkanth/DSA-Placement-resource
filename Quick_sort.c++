Resource-link : - https://www.youtube.com/watch?v=WIrA4YexLRQ&pp=ygUKcXVpY2sgc29ydA%3D%3D

//The concept is based on Divide and Conque
// The time complexity of algo would be O(nlogn) and space complexity would be O(1) 

class Solution
{
    public:
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int index=partition(arr,low,high);
            quickSort(arr,low,index-1);
            quickSort(arr,index+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int i=low;
        int j=high;
        int pivot=arr[low];
        while(i<j){
           
           while(arr[i]<=pivot&&i<=high) i++;
           while(arr[j]>pivot&&j>=low) j--;
           if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
};
