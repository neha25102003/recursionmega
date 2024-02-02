#include <iostream>
using namespace std;
int firstindex(int arr[],int size,int num){
     if (size<0)
    {
        return -1;
    }
    
 if (arr[size-1]==num)
 {
    return size-1;
    
 }
 else
 {
     firstindex(arr,size-1,num);
 }
}
int main(){
     /*int size;
    cin>>size;
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int num;
    cin>>num;*/
    int arr[8]={1,2,3,2,4,5,2,1};
   cout<<firstindex(arr,8,0)<<endl;
   cout<<firstindex(arr,8,1)<<endl;
   cout<<firstindex(arr,8,2)<<endl;}