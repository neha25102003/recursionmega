#include <iostream>
using namespace std;
int firstindex(int arr[],int size,int num){
    int count;
     if (size<0)
    {
        count= -1;
    }
    if (arr[0]==num)
 {  
  return 0;  
 }
 count=firstindex(arr+1,size-1,num);  
 if (count == -1) {
        return -1;  // element not found in the sub-array
    } else {
        return count+ 1;  // add 1 to the sub-array index to get the original index
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
    int arr[6]={15,6,7,8,6,15};
   cout<<firstindex(arr,6,0)<<endl;
   cout<<firstindex(arr,6,8)<<endl;
   cout<<firstindex(arr,6,6)<<endl;}