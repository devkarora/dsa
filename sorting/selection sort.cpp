it is just like bubble sort. The minimum of the remaining array comes the right postition from the front(index 0).

//ITERATIVE
void selection_sort(int arr[], int n){
    
    for(int i=0;i<n-1;i++){
    
        int min_index=0;
        
        for(int unsort_index=i+1 ; unsort_index<n ; unsort_index++){
            if(arr[unsort_index] < arr[min_index]){
                min_index = unsort_index;
            }
        }
        //swap of minimum of the remaining array to the right position from the front
        int temp=arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}





















