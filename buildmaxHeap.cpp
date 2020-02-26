// C++ program for implementation of Heap Sort 
#include <iostream> 
  
using namespace std; 
  
// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
void buildmaxHeap(int arr[],int n)
{
    for(int i = n/2 -1; i>=0; i--)
    {
        heapify(arr, n, i);
    }
}
/* A utility function to print array of size n */
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
int main()
{
    int arr[]={7,5,9,2,4,0,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    buildmaxHeap(arr,n);
    printArray(arr,n);
}