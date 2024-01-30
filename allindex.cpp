#include <iostream>
using namespace std;
void allindex(int arr[],int size,int num){
     if (size<0)
    {
        return ;
    }
 allindex(arr,size-1,num);  
 if (arr[size-1]==num)
 {
    cout<< size-1<<",";
    
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
   allindex(arr,8,0);
   cout<<endl;
   allindex(arr,8,1);
   cout<<endl;
   allindex(arr,8,2);}