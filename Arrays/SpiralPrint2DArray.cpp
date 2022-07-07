
#include <iostream>
#include<climits>
using namespace std;
int main(){
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
    cout<<"Sprial Hunt:";
    int row_st=0;
    int row_ed=row-1;
    int col_st=0;
    int col_ed=col-1;
    while(row_st<=row_ed && col_st<=col_ed){
        // First Row: Left to right
        for(int c=col_st; c<=col_ed;c++){
            cout<<two_d_array[row_st][c]<<" ";
        }
        row_st++;//2nd itr; Next row (row+2), row+3
        //For end column; up to down 
        for (int r=row_st; r<=row_ed;r++){
            cout<<two_d_array[r][col_ed]<<" ";
        }
        col_ed--;// 2nd itr; second last column (col-2)
        // For last row; right to left 
        for (int c=col_ed; c>=col_st;c--){
            cout<<two_d_array[row_ed][c]<<" ";
        }
        row_ed--;
        // Down to top
        for (int r=row_ed; r>=row_st; r--){
            cout<<two_d_array[r][col_st]<<" ";
        }
        col_st++;
    }
       
    return 0;
}