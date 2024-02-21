#include <iostream>
using namespace std;
int sumdigit(int n){
    if (n >= 0 && n < 10)
    {
        return n;
    }
    else
    {
        return sumdigit(n/10)+(n%10);
    }
    
}
int main(){
    cout<<sumdigit(311);
}