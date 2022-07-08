
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of the character array:";
    cin>>size;
    char chArray[size+1];//Last element is Null
    cin>>chArray;
    
    //Palindrome sequence
    bool isPalindrome=true;
    for (int i=0; i<size;i++){
        if (chArray[i]!=chArray[size-1-i]){
            isPalindrome=false; 
            break;
        }
    }
    if (isPalindrome==true){
            cout<<"Word is palindrome";
    }
    else{
            cout<<"Word is not palindrome";

    }

    return 0;
}