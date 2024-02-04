#include <iostream>
using namespace std;
int numofdig(int n){
    
    if (n<10)
    {
        return 1;
    }
    else
    {  
       return numofdig(n/10)+1;
        
    }
    
}
int main(){
 int n;
 cin>>n;
 cout<<numofdig(n)<<endl;
}