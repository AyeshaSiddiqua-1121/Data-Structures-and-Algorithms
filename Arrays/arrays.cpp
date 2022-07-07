
#include <iostream>
#include<climits>
using namespace std;
int main() {
    //Arrays 
    int s;
    cout<<"Enter the size";
    cin>>s;
    int array[s];
    for (int i=0;i<s;i++){
        cin>>array[i];
    }
    // Finding max and min numbers within the array
    int maxNo=0;//default max number in C++
    int minNo=0;
    for (int i=0;i<s;i++){
        // Method##01
        // if (array[i]>maxNo){
        //     maxNo=array[i];
        // }
        // if (array[i]<minNo){
        //     minNo=array[i];
        // }
        // Method#02
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);

    }
    cout<<"Following:";
    cout<<maxNo<<"and"<<minNo<<endl;
    return 0;  
} 

