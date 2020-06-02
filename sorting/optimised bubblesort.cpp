//bubble sort Optimized Implementation if the inner loop doesnt swap , them the array is sorted already

#include <bits/stdc++.h>
using namespace std;

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
    int arr[]= { 9 , 8, 4, 3,5 ,6 ,7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    print(arr,n);
    return 0;
}
