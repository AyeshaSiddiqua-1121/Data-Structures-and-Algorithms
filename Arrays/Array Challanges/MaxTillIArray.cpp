
#include <iostream>
#include<climits>
using namespace std;
int main() {
    //What we have to search is max till i; Till the end of array, what were the max at each posiion
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int array[size];
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    int max_till=-9999999;
    for (int i=0; i<size;i++){
        max_till=max(max_till,array[i]);
        cout<<"Next max:";
        cout<<max_till<<endl;
    }
    return 0;  
} 

