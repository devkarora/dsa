//bubble sort Optimized Implementation if the inner loop doesnt swap , them the array is sorted already

//https://www.geeksforgeeks.org/bubble-sort/

#include <bits/stdc++.h>
using namespace std;

//PURE RECURSIVE NON OPTIMISED
void bubblesort_pure_recursive(int arr[],int n,int i){
    
    if(n==1){
        return;
    }
    if(i==n-1){
        bubblesort_pure_recursive(arr,n-1,0);
        return;
    }
    
    
    if(arr[i] > arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    bubblesort_pure_recursive(arr,n,i+1);
    return;
}

//SEMI RECURSIVE OPTIMISED
void bubblesort_recursive_optimised(int arr[],int n,int i){
    
    if(n==1){
        return;
    }
    bool is_swap =0;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            is_swap=1;
        }
    }
    if(!is_swap){
        return;
    }
    bubblesort_recursive_optimised(arr,n-1,0);
    return;
}

//ITERATIVE OPTIMISED
void bubblesort(int arr[], int n){
    bool is_swap_done;
    for(int i=0;i<n-1;i++){
        is_swap_done = 0;
        
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) { // swap
                
                int temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j]=temp;
                is_swap_done =1;
                
            }
            
        }
        if(!is_swap_done){
                break;
            }
    }
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
int main()
{
    int arr[]= { 9, 8, 4, 3 ,5 ,6 ,7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    print(arr,n);
    return 0;
}




