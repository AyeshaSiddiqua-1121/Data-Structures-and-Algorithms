
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
    // Insertion Sort
    for (int i=1; i<size;i++){
        int current=array[i];
        int j=i-1;
        while(array[j]>current && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
    
    cout<<"Sorted Array is:";
    for (int i=0; i<size;i++){
        cout<<array[i]<<",";
    }
    return 0;  
} 

