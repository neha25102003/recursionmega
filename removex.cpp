#include <iostream>
using namespace std;
void removex(char s[],char x){
    if (s[0]=='\0')
    {
        return ;
    }
    if (s[0]!=x)
    {
        removex(s+1,x) ;
    }
    else
    {
        for (int i = 0; s[i]=='\0'; i++)
        {
            s[i]=s[i+1];
        }
        removex(s,x);
    }
    
}
int main(){
char str[100];
cin>>str;
char x;
cin>>x;
removex(str,x);
cout<<str<<endl;
}