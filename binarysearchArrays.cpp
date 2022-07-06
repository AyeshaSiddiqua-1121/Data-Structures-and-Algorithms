
#include <iostream>
#include<climits>
using namespace std;

// Binary Search Function, Time Complexity is O(log2(n))
int binarySearch(int arr[],int s,int k){
    int start=0;
    int end=s;//Last element of array
    while(start<=end){
        int mid=(start+end)/2;//Mid element of array
        if (k==arr[mid]){
            return mid;
        }
        //If key is in first half
        else if (k<arr[k]){
            end=mid-1;
        }
        //If key is second half
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main() {
    //Array Search: Binary Search
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int array[size];
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key:";
    cin>>key;
    //Complexity of Linear Search; O(n)
    cout<<binarySearch(array,size,key)<<endl;
    return 0;  
} 

