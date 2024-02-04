#include <iostream>
using namespace std;
void printnum(int n){
    if (n==1)
    {
        
        cout << 1<<endl;
    }else
    {
        cout<<n<<endl;
        printnum(n-1);
    }
 
}
int main(){
    int n;
    cin>>n;
    printnum(n);
    
}