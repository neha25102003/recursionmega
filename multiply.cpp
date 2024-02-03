#include <iostream>
using namespace std;
int multiply(int m,int n){
    
   if(n==1){
    return m;
   }
   int product;
   product= m+multiply(m,n-1);
   return product;
}
int main(){
    cout<<multiply(2,5);
}