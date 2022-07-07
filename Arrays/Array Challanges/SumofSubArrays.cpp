
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
    // Calculating the sum of sub-arrays. Note that subarrays are calcualated using nested loops
    int sum=0;
    for (int i=0;i<size;i++){
        for (int j=i; j<size;j++){
            sum+=array[j];
            cout<<"Sum will be:";
            cout<<sum<<endl;
        }
    }
    return 0;  
} 

