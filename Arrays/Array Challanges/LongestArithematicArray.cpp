
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
    //Initialising the important parameters of array
    int longest_ans=0;
    int j=0;
    int common_difference_previous=array[1]-array[0];
    int common_difference_current=0;
    // updating the differences
    while (j<size){
        if (common_difference_previous==array[j]-array[j-1]){
            common_difference_current++;
        }
        else{
            common_difference_previous=array[j]-array[j-1];
            common_difference_current=2;
        }
        longest_ans=max(longest_ans,common_difference_current);
        j++;
    }
    cout<<longest_ans<<endl;
    return 0;  
} 

