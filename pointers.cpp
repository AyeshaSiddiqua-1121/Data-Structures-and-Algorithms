
#include <iostream>
#include<climits>
using namespace std;
// void swap(int a, int b){// Scope difference; The value of both variables is initialised and swapped but these are local 
//     int temp=a;
//     a=b; 
//     b=temp;

// }

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    // Accessing Array with pointer
    // int array[]={1,2,4};
    // cout<<*array<<endl;//default indexing pointer
    // int *ptr=array;
    // for (int i=0; i<3;i++){
    //     // cout<<"First Method:"<<endl;
    //     cout<<*ptr<<endl;
    //     ptr++;
    //     // cout<<"Second Method:"<<endl;
    //     cout<<*(ptr+i)<<endl;
    // }
//Swap funciton
int a=10;
int b=20;
swap(a, b);// Asnwer will be 10 20 because we pass value in function, not address, You are not accessing the original variable
cout<<a<<' '<<b<<endl;
int *aptr=&a;
int *bptr=&b;
swap(aptr, bptr);
//Pointers to Pointers
int **ptr;
ptr=&aptr;
cout<<"The value of aptr:"<<aptr<<endl;
cout<<"The value of *ptr:"<<*ptr<<endl;
cout<<"The value of **ptr:"<<**ptr<<endl;//Double de-refrencing
    return 0;

}
