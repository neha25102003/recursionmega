#include <iostream>
using namespace std;
int count0(int n){
if (n==0)
{
     return 1;
}
 else {
     return count0(n/10);
 }
}


int main(){
    int n;
    cin>>n;
    cout<< count0(n);
}