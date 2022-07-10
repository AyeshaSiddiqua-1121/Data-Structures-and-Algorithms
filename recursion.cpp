
#include <iostream>
#include<climits>
using namespace std;
//Recursion; Calculate the sum till n
// int sum(int n){
//     if (n==0){
//         return 0;
//     }
//     else{
//         int prevSum=sum(n-1);
//         return n+prevSum;
//     }
// }
// Recursion: Power of number till p times
int multiply(int n, int p){
    if (n==0){
        return 1; 
    }
    
        int nMinusOneMul= multiply(n, p-1);
        return n*nMinusOneMul;

}
 
int main(){
int tillN;
cout<<"Enter the value of n:";
cin>>tillN;
int p;
cout<<"Till number of times:";
cin>>p;
cout<<"Power of n will be:";
cout<<multiply(tillN, p)<<endl;
    return 0;
}