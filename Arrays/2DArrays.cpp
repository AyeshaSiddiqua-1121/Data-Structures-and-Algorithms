
#include <iostream>
#include<climits>
using namespace std;
int main() {
    // Working on 2D Arrays
    int col, row, key;
    cout<<"Enter the number of rows:";
    cin>>row;
    cout<<"Enter the number of columns:";
    cin>>col;
    
    int two_d_array[row][col];
    //Inputing the elements in the 2D Array 
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>two_d_array[i][j];
        }
    }

    cout<<"2D Array is:\n";
    //Displaying 2D Array
    for(int i=0; i<row;i++){
        for (int j=0; j<col;j++){
            cout<<two_d_array[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter the element you want to search:";
    cin>>key;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (two_d_array[i][j]==key){
                cout<<"The searched index is:"<<"Row is "<<i<<" "<<"Column is "<<j<<" ";
            }
        }
    }
    return 0;  
} 

