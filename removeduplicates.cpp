#include <iostream>
using namespace std;
void removeduplicateconsecutive(char s[]){
    if (s[0]=='\0')
    {
        return ;
    }
    if (s[0]!=s[1])
    {
        removeduplicateconsecutive(s+1) ;
    }
    else
    {
        for (int i = 0; s[i]!='\0'; i++)
        {
            s[i]=s[i+1];
        }
        removeduplicateconsecutive(s);
    }
}
int main(){
char s[100];
cin>>s;
removeduplicateconsecutive(s);
cout<<s<<endl;
}