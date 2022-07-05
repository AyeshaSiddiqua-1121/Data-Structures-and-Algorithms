
#include <iostream>
#include<climits>
using namespace std;
int linearSearch(int arr[],int s,int k){
    for (int i=0;i<s;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;

}
int main() {
    //Array Search: Linear Search
    int s;
    cout<<"Enter the size";
    cin>>s;
    int array[s];
    for (int i=0;i<s;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key:";
    cin>>key;
    //Complexity of Linear Search; O(n)
    cout<<linearSearch(array,s,key)<<endl;
    return 0;  
} 

