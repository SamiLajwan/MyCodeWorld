int findFirstOccurance(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            //ans found -> may or may not be first ocurnance
            //store and compute
            ansIndex = mid;
            //kyuki first occurance ki baat ho rhi h
            //left me jao
            e = mid -1;
        
        }
        if(target > arr[mid]){
            s = mid + 1;
        }
        if(target < arr[mid]){
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}