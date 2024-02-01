#include <iostream>
#include<cmath>
using namespace std;
float geometricsum(int k){
 
 if (k<=0)
 {
    return 1;
 }
 
 else
 {
   return geometricsum(k-1)+(1/ pow(2, k ));  
 }
 
}
int main(){
    cout<<geometricsum(3);
}