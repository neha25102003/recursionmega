#include <iostream>
using namespace std;
string replacepi(string str){
    if (str[0]=='\0')
    {
        return "";
    }
    if (str.substr(0,2)=="pi")
    {
        return "3.14"+ replacepi(str.substr(2)) ;
    }
    else
    { return str[0]+replacepi(str.substr(1));
    }
    
}
int main(){
string str;
cin>>str;
replacepi(str);
cout<<replacepi(str)<<endl;
}