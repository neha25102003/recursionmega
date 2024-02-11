#include <iostream>
using namespace std;
int sumarr(int arr[],int size){
    int sum;
    if (size<=0)
    {
        sum=0;
    }
    else{
    sum=sumarr(arr,size-1)+arr[size-1];
  
    }
     return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<sumarr(arr,size);
}