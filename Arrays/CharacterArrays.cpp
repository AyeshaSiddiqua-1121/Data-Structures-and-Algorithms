
#include <iostream>
#include<climits>
using namespace std;
int main(){
    char chArray[100]="Ayesha here";
    cout<<chArray<<endl;
    cout<<"Iterating character by character:";
    // for (int i=0; i<100; i++){//For loop is efficient when you know the exact size of array, by counting the number of characters
    //     cout<<chArray[i]<<endl;    }
    int i=0;
    while (chArray[i]!='\0'){//Last element of character array is Null
        cout<<chArray[i]<<endl;
        i++;
    }
    return 0;
}