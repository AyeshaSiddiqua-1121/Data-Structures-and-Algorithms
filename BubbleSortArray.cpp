
#include <iostream>
#include<climits>
using namespace std;
int main() {
    //Array Search: Binary Search
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int array[size];
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    // BUbble Sorting; Time Complexity is O(n^2)
    int count=1;
    while (count<size){
        for (int i=0;i<size-count;i++){
            // Comparing adjacent elements of the array
            if(array[i]>array[i+1]){ //Going from left to  right 
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        count++;
    }
    cout<<"Sorted Array is:";
    for (int i=0; i<size;i++){
        cout<<array[i]<<",";
    }
    return 0;  
} 

