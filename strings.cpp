#include <iostream>
using namespace std;
int main(){
    string s="abc";
    cout<<s<<endl;
    cout<<s[1]<<endl;
    s[0]='p';
    cout<<s<<endl;
    string* sp=new string;
    *sp="def";
    cout<<sp<<endl;
    cout<<*sp<<endl;
    string s1;
    getline(cin,s1);
    cout<<s1<<endl;
    cout<<*sp+s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.substr(3,6)<<endl;
    cout<<s.find("b")<<endl;
}