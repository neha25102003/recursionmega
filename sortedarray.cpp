#include <iostream>
using namespace std;
bool issorted(int arr[],int size){
    if (size==0||size==1)
    {
        return 1;
    }
    if (arr[0]>arr[1])
    {
        return 0;
    }
     bool yesorno= issorted(arr+1,size-1);
     return yesorno;
    }
    int main(){

    }