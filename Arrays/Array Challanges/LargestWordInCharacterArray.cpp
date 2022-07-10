
#include <iostream>
#include<climits>
using namespace std;
int main(){
    int size; 
    cout<<"Enter the size of character array:";
    cin>>size;
    cin.ignore();//Flushing the input buffer
    //Taking character array
    char array[size+1];
    cout<<"Enter the character array:";
    cin.getline(array,size);
    cin.ignore();
    //Checking the longest word in array
    int current_length, longest_length=0;
    int i;
    while (1){
        if (array[i]==' ' || array[i]=='\0'){
            if (current_length>longest_length){
                longest_length=current_length;
            }
            else 
            current_length++;
        }
            if (array[i]=='\0'){
                break;
            }
            i++;        
    }
    cout<<"Longest length will be:"<<longest_length<<endl;
    return 0;
}