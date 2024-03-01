#include <iostream>
#include <string>
using namespace std;
int lengtharr(string str){
    int length=0;
    for (int i = 0;str[i]!='\0'; i++)
{
    length=length+1;
}
return length;
}
string pairstar(string str){
    if (str[0]=='\0')
    {
        return "";
    }
    if (str[0]!=str[1])
    {
      return str[0]+pairstar(str.substr(1)) ;
    }
    else
    { 
        return str[0]+"*"+pairstar(str.substr(1));
    }
}

int main(){
string str;
cin>>str;
string result=pairstar(str);

cout<<result<<endl;

}