it is just like bubble sort. The minimum of the remaining array comes the right postition from the front(index 0).

//ITERATIVE
void selection_sort(int arr[], int n){
    // One by one move boundary of unsorted subarray
    for(int i=0;i<n-1;i++){
    
        int min_index=0;
     // Find the minimum element in unsorted array  
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element         
        int temp=arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}





















