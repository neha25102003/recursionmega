#include <iostream>
using namespace std;
bool checknum(int arr[],int size,int num){
    if (size<0)
    {
        return 0;
    }
    
 if (arr[size-1]==num)
 {
    return 1;
 }
 else
 {
    return checknum(arr,size-1,num);
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
    cin>>num;
    cout<<checknum(arr,size,num);*/
int arr[3]={1,2,3};
cout<<checknum(arr,3,0);
}