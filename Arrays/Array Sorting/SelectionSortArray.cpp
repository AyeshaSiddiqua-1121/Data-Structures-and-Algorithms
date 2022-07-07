
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
    for (int i=0; i<size-1;i++){
        for (int j=i+1; j<size;j++){
            // Compare the elements 
            if (array[j]<array[i]){
                //Swapping the element of array j with i
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;   
            }
            
        }
    }
    cout<<"Sorted Array is:";
    for (int i=0; i<size;i++){
        cout<<array[i]<<",";
    }
    return 0;  
} 

