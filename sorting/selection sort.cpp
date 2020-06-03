it is just like bubble sort. The minimum of the remaining array comes the right postition from the front(index 0).

    
//ITERATIVE
https://www.geeksforgeeks.org/selection-sort/
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
//RECURSIVE
https://www.geeksforgeeks.org/recursive-selection-sort/
 
// Return minimum index 
int minIndex(int a[], int i, int j) 
{ 
    if (i == j) 
        return i; 
  
    // Find minimum of remaining elements 
    int k = minIndex(a, i + 1, j); 
  
    // Return minimum of current and remaining. 
    return (a[i] < a[k])? i : k; 
} 
  
// Recursive selection sort. n is size of a[] and index 
// is index of starting element. 
void recurSelectionSort(int a[], int n, int index = 0) 
{ 
    // Return when starting and size are same 
    if (index == n) 
       return; 
  
    // calling minimum index function for minimum index 
    int k = minIndex(a, index, n-1); 
  
    // Swapping when index nd minimum index are not same 
    if (k != index) 
       swap(a[k], a[index]); 
  
    // Recursively calling selection sort function 
    recurSelectionSort(a, n, index + 1); 
} 



// PURE RECURSIVE
https://www.sanfoundry.com/c-program-selection-sort-using-recursion/
















